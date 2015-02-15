//
//  log.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "log.h"
#include <stdarg.h>
SocketAndFileLog *DefaultLogger;

/*
 int  boost::asio::detail::service_id<boost::asio::detail::select_reactor>::_service_id<boost::asio::detail::select_reactor>(void *this)
 {
 boost::asio::io_service::id::_id(this);
 }
 */

FileLog::FileLog(const char *Filename)
{
    FILE *fh;
    if(Filename) {
        fh = fopen(Filename, "wt");
        this->fh=fh;
    }else{
        this->fh=stdout;
    }
}
int FileLog::WriteLog(const char * format, ...)
{
    return 0;
}
SocketLog::SocketLog(const char * url,int port):socket(this->iosev)
{

    //boost::system::error_code ec;
    //this->socket=ip::tcp::socket(this->iosev);
    this->ep= ip::tcp::endpoint(ip::address::from_string(url),port);
    socket.connect(ep,this->ec);
    if(ec){
        /*
         */
    }
}



int SocketLog::WriteLog(const char *Format, ...)
{
    /*

     {
     v10 = GetTime(&v12);
     v10 = boost::asio::buffer<char_1000>(&v13, (int)&Dst, v4);
     v14 = boost::asio::basic_stream_socket<boost::asio::ip::tcp_boost::asio::stream_socket_service<boost::asio::ip::tcp>>::write_some<boost::asio::mutable_buffers_1>(
     (void *)(a1 + 20),
     v10,
     a1 + 64);
     v20 = -1;
     boost::asio::mutable_buffers_1::_mutable_buffers_1((int)&v13, v5);
     Args = 0;
     }
     */
    if(ec && socket.connect(ep,ec)){
        
    } else {
        
    }
    return 0;
}

//SocketAndFileLog(const char * url,int port, const char * filename = NULL):FileLog(filename),SocketLog(url,port){};



int  SocketAndFileLog::WriteLog(const char *Format,...)
{
    char buf[4096];
    va_list args;
    va_start(args, Format);
    va_end(args);
    vsnprintf(buf,4096,Format,args);
    if(this->fh)
    {
        fprintf(fh,buf);
        fflush(fh);
    }
    if(ec && socket.connect(ep,ec)){
        
    } else {
        boost::asio::streambuf sbuf;
        std::ostream os(&sbuf);
        os << buf;
        size_t n = socket.send(sbuf.data());
        sbuf.consume(n);
        //todo 
    }
    return 0;
}

void LOG_INIT(char *url,short port, char *filename)
{
        DefaultLogger=new SocketAndFileLog(url,port,filename);
}

void LOG(char *Format,...)
{
    va_list args;
    va_start(args, Format);
    DefaultLogger->WriteLog(Format,args);
    va_end(args);
}



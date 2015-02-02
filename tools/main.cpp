//
//  main.cpp
//  tools
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include <iostream>
#include <boost/asio.hpp>
#include <boost/asio/ip/address.hpp>
#include <boost/thread/thread.hpp>
#include <boost/interprocess/sync/interprocess_semaphore.hpp>
#include <boost/thread/mutex.hpp>
#include <stdlib.h>
#include <istream>
#include "test_log.h"
using namespace std;
using namespace boost::asio;
using namespace boost;
boost::thread_group g_log_tgroup;


void logger_work(ip::tcp::socket *psock)
{
     asio::streambuf buf;
     //std::ostream os(&buf);
     //os << "hello world!";
     //size_t n = psock->send(buf.data());
     //rbuf.consume(n);
    
    while(true) {
        asio::streambuf::mutable_buffers_type rbuf=buf.prepare(4096);
        try {
            size_t n = psock->receive(rbuf);
            buf.commit(n);
            std::istream is(&buf);
            std::string s;
            is>>s;
            //boost::system::system_error err;
        } catch(boost::system::error_code ec) {
            std::cout<<ec.message();
            if (ec.value()==boost::asio::error::eof) {
                
            }else {
                
            }
        }
    }
    
}
void add_logger(ip::tcp::socket *psock)
{
    boost::thread *pthread= new boost::thread(boost::bind(logger_work,psock));
    pthread->detach();
}


void server_main(char *ip, short port)
{
    io_service ios;
    ip::tcp::acceptor acc(ios,ip::tcp::endpoint(ip::address::from_string(ip),port));
    cout << acc.local_endpoint().address() <<endl;
  
    while (true)
    {
        //  buff
        ip::tcp::socket *psock= new ip::tcp::socket(ios);
        acc.accept(*psock);
        add_logger(psock);
        sleep(1);
        //cout << sock.remote_endpoint().address() <<endl;
        //sock.write_some(buffer("hello asio"));
    }    
}

int main(int argc, char *argv[])
{
    char *ip="127.0.0.1";
    short port=6688;

    if (argc == 2) {
        ip=argv[0];
        port=atoi(argv[1]);
    }
    
    server_main(ip,port);
    
    cout << "server start." <<endl;
    //boost::asio::ip::tcp::acceptor acceptor(ios,boost::asio::ip:tcp::endpoint(boost::asio::ip::tcp::v4(),6688));
    //
    //ip::tcp::acceptor acc(ios,ip::tcp::endpoint(ip::tcp::v4(),6688));
    //ip::tcp::endpoint(ip::address::from_string(url),port);
    //char* p1 = asio::buffer_cast<char*>(buffer);
    //vector<char> str(4096,0);
    //sock.read_some(buffer(rbuf));
    return 0;
}


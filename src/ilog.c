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
SocketLog::SocketLog(const char * url,int port)
{
    /*
       ILog::ILog(this);
       boost::asio::io_service::io_service((char *)v10 + 8);
       v3 = boost::asio::ip::address_v4::from_string(&v8, Str1);
       boost::asio::ip::address::address(&v7, v3);
       boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint<boost::asio::ip::tcp>();
       boost::system::error_code::error_code((char *)v10 + 64);
       boost::asio::basic_socket<boost::asio::ip::tcp_boost::asio::stream_socket_service<boost::asio::ip::tcp>>::connect(
       (char *)v10 + 20,
       (int)&v9,
       (char *)v10 + 36,
       (int)((char *)v10 + 64));
       */
    return;
}



int SocketLog::WriteLog(const char *Format, ...)
{
    /*
       if ( boost::system::error_code::operator void____cdecl____void_((void *)(a1 + 64))
       && (boost::asio::basic_socket<boost::asio::ip::tcp_boost::asio::stream_socket_service<boost::asio::ip::tcp>>::connect(
       (void *)(a1 + 20),
       (int)&v11,
       (void *)(a1 + 36),
       a1 + 64),
       boost::system::error_code::operator void____cdecl____void_((void *)(a1 + 64))) )
       {
       printf("Reconnecting to LOG Server failed!\n");
       }
       else
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
}

SocketAndFileLog::SocketAndFileLog(char *url, u_short a3, const char *Filename)
{
    /*
       FileLog::FileLog(this, Filename);
       SocketLog::SocketLog((char *)v7 + 12, Str1, a3);
       */
}

int  SocketAndFileLog::WriteLog(const char *Format,...)
{
    /*
       v10 = GetTime(&v11);
       std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v11);
       vsprintf(&Dest, Format, Args);
       fprintf(*(FILE **)(a1 + 8), &Dst);
       fflush(*(FILE **)(a1 + 8));
       if ( boost::system::error_code::operator void____cdecl____void_((void *)(a1 + 76))
       && (boost::asio::basic_socket<boost::asio::ip::tcp_boost::asio::stream_socket_service<boost::asio::ip::tcp>>::connect(
       (void *)(a1 + 32),
       (int)&v12,
       (void *)(a1 + 48),
       a1 + 76),
       boost::system::error_code::operator void____cdecl____void_((void *)(a1 + 76))) )
       {
       printf("Reconnecting to LOG Server failed!\n");
       }
       else
       {
       v10 = boost::asio::buffer<char_1000>(&v13, (int)&Dst, v4);
       v14 = boost::asio::basic_stream_socket<boost::asio::ip::tcp_boost::asio::stream_socket_service<boost::asio::ip::tcp>>::write_some<boost::asio::mutable_buffers_1>(
       (void *)(a1 + 32),
       v10,
       a1 + 76);
       v20 = -1;
       boost::asio::mutable_buffers_1::_mutable_buffers_1((int)&v13, v5);
       Args = 0;
       }
       */
    return 0;
}


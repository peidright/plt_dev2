//
//  common.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "common.h"


string remove_space(const string & src)
{
    return src;
}

string upper_case(const string & src)
{
    return src;
}

void split_string(const string & src, const string & delimiter, vector<string> & vstr)
{
    return;
}

string get_today()
{
    char srcbuf[20];
    struct tm *v6; // [sp+DCh] [bp-30h]@1
    time_t Time; // [sp+E8h] [bp-24h]@1
    time(&Time);
    v6 = localtime(&Time);
    sprintf(srcbuf, "%04d%02d%02d", v6->tm_year + 1900, v6->tm_mon + 1, v6->tm_mday);
    return srcbuf;
}

string get_time()
{
    char srfbuf[20];
    struct tm *v6; // [sp+DCh] [bp-30h]@1
    time_t Time; // [sp+E8h] [bp-24h]@1
    time(&Time);
    v6 = localtime(&Time);
    sprintf(srfbuf, "%02d:%02d:%02d", v6->tm_hour, v6->tm_min, v6->tm_sec);
    return srfbuf;
}

int  get_fsize(FILE *File)
{
    long offset,v6;
    v6 = 0;
    if ( File )
    {
        offset = ftell(File);
        fseek(File, 0, 2);
        v6 = ftell(File);
        fseek(File, offset, 0);
    }
    return v6;
}

long load_bfile(const char * filename, void * dst)
{
    size_t Count=0; // [sp+D0h] [bp-14h]@2
    FILE *File; // [sp+DCh] [bp-8h]@1
    File = fopen(filename, "rb");
    if ( File )
    {
        Count = get_fsize(File);
        fread(dst, 1u, Count, File);
        fclose(File);
    }
    return Count;
}

void save_bMem(const char * filename, void * src, long size)
{
    FILE *File; // [sp+D0h] [bp-8h]@1
    File = fopen(filename, "wb");
    fwrite(src, 1u, size, File);
    fclose(File);
}




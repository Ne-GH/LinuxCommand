#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFERSIZE 1024 * 8

char buf[BUFFERSIZE];

int main(){
    buf[0] = 'y';
    buf[1] = '\n';
    memcpy(buf+2, buf, 2);
    memcpy(buf+4, buf, 4);
    memcpy(buf+8, buf, 8);
    memcpy(buf+16, buf, 16);
    memcpy(buf+32, buf, 32);
    memcpy(buf+64, buf, 64);
    memcpy(buf+128, buf, 128);
    memcpy(buf+256, buf, 256);
    memcpy(buf+512, buf, 512);
    memcpy(buf+1024, buf, 1024);
    memcpy(buf+(1024*2), buf, (1024*2));
    memcpy(buf+(1024*3), buf, (1024*3));
    memcpy(buf+(1024*4), buf, (1024*4));


Go:
        write(1,buf,BUFFERSIZE);
        goto Go;

    


    return 0;
}

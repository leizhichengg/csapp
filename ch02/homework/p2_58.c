/*************************************************************************
	> File Name: absdiff.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 20 Apr 2018 03∶48∶10 PM CST
 ************************************************************************/

#include<stdio.h>

int is_little_endian()
{
    int x=0x1234;
    unsigned char* _bytes=(unsigned char *) &x;
    if((char)_bytes[0]==0x34)
        return 1;
    else
        return 0;
}

int main()
{
    if(is_little_endian())
        printf("Is little-endian!\n");
    else
        printf("Is big-endian!\n");
    return 0;
}

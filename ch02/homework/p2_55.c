/*************************************************************************
	> File Name: absdiff.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 20 Apr 2018 03∶29∶59 PM CST
 ************************************************************************/

/*
Compile and run the sample code that uses show_bytes (file show-bytes.c) 
on different machines to which you have access. Determine the byte ordering 
userd by these machines.
*/

#include<stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len)
{
    size_t i;
    for(i=0;i<len;i++)
        printf("%.2x",start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x,sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x,sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x,sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival=val;
    float fval=(float) ival;
    int *pval=&ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main()
{
    int val=12345;
    test_show_bytes(val);
    return 0;
}
/*output:(Litter endian)
39300000
00e44046
f84b35f9ff7f0000
*/

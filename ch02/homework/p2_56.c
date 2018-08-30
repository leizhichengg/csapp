/*************************************************************************
	> File Name: absdiff.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 20 Apr 2018 03∶30∶55 PM CST
 ************************************************************************/

/*
Try running the code for show_bytes for different sample values.
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
    int val1=12345;
    test_show_bytes(val1);
    int val2=1;
    test_show_bytes(val2);
    int val3=44564654;
    test_show_bytes(val3); 
    return 0;
}
/*output:(Litter endian)
39300000
00e44046
68117ff6ff7f0000
01000000
0000803f
68117ff6ff7f0000
ae00a802
2c002a4c
68117ff6ff7f0000
*/

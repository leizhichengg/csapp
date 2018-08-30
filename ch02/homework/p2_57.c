/*************************************************************************
	> File Name: absdiff.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 20 Apr 2018 03∶33∶06 PM CST
 ************************************************************************/

/*
Write procedures show_short, show_long, and show_double that print the 
byte representations of C objectsof types short, long, and double, respectively. 
Try these out on several machines.
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

void show_short(short x)
{
    show_bytes((byte_pointer) &x,sizeof(short));
}

void show_long(long x)
{
    show_bytes((byte_pointer) &x,sizeof(long));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x,sizeof(float));
}

void show_double(double x)
{
    show_bytes((byte_pointer) &x,sizeof(double));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x,sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival=val;
    short sval=(short) ival;
    long lval=(long) ival;
    float fval=(float) ival;
    double dval=(double) ival;
    int *pval=&ival;
    show_int(ival);
    show_short(sval);
    show_long(lval);
    show_float(fval);
    show_double(dval);
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
3930
3930000000000000
00e44046
00000000801cc840
b8a3d9f2ff7f0000
*/

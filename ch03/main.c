/*************************************************************************
	> File Name: main.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sun 26 Aug 2018 10:50:35 AM CST
 ************************************************************************/

#include <stdio.h>

void multstore(long, long, long *);

int main()
{
	long d;
	multstore(2, 3, &d);
	printf("2 * 3 --> %ld\n", d);
	return 0;
}

long mult2(long a, long b)
{
	long s = a * b;
	return s;
}

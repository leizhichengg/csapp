/*************************************************************************
	> File Name: mstore.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sun 26 Aug 2018 10:22:41 AM CST
 ************************************************************************/

long mult2(long, long);

void multstore(long x, long y, long *dest)
{
	long t = mult2(x, y);
	*dest = t;

}

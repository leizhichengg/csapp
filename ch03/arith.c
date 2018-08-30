/*************************************************************************
	> File Name: arith.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Mon 27 Aug 2018 03:50:41 PM CST
 ************************************************************************/
long arith(long x, long y, long z)
{
	long t1 = x ^ y;
	long t2 = z *48;
	long t3 = t1 & 0x0F0F0F0F;
	long t4 = t2 - t3;
	return t4;
}


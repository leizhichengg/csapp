/*************************************************************************
	> File Name: fun_b.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 01 Sep 2018 03:45:58 PM CST
 ************************************************************************/

long fun_b(unsigned long x)
{
	long val = 0;
	long i;
	for(i=64; i!=0; i--)
	{
		val = (val * 2) | (x & 0x1);
			x >> 1;
	}
	return val;
}

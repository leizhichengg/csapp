/*************************************************************************
	> File Name: swithch_eg.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 01 Sep 2018 04:33:34 PM CST
 ************************************************************************/

void switch_eg(long x, long n, long *dest)
{
	long val = x;
	switch(n)
	{
		case 100:
			val *= 13;
			break;

		case 102:
			val += 10;

		case 103:
			val += 11;
			break;

		case 104:
		case 106:
			val *= val;
			break;

		default:
			val = 0;
	}
	*dest = val;
}

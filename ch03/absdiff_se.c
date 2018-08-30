/*************************************************************************
	> File Name: absdiff_se.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 29 Aug 2018 10:00:03 PM CST
 ************************************************************************/
long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y)
{
	long result;
	if(x < y)
	{
		lt_cnt++;
		result = y - x;
	}
	else
	{
		ge_cnt++;
		result = x - y;
	}
	return result;
}

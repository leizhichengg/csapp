/*************************************************************************
	> File Name: absdiff.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 30 Aug 2018 09:16:20 AM CST
 ************************************************************************/

long absdiff(long x, long y)
{
	long result;
	if(x < y)
		result = y - x;
	else
		result = x - y;
	return result;
}

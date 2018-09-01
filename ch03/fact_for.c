/*************************************************************************
	> File Name: fact_for.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 01 Sep 2018 03:08:41 PM CST
 ************************************************************************/

long fact_for(long n)
{
	long i;
	long result = 1;
	for (i = 2; i <= n; i++)
		result *= i;
	return result;
}

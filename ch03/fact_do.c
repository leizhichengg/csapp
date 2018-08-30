/*************************************************************************
	> File Name: fact_do.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 30 Aug 2018 03:47:46 PM CST
 ************************************************************************/
long fact_fo(long n)
{
	long result = 1;
	do
	{
		result *= n;
		n = n - 1;
	}
	while(n > 1);
	return result;
}

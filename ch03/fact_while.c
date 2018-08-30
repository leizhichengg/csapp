/*************************************************************************
	> File Name: fact_while.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 30 Aug 2018 09:42:07 PM CST
 ************************************************************************/

long fact_while(long n)
{
	long result = 1;
	while(n > 1)
	{
		result *= n;
		n = n - 1;
	}
	return result;
}

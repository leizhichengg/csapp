/*************************************************************************
	> File Name: rfact.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Wed 19 Sep 2018 07:33:15 PM CST
 ************************************************************************/

long rfact(long n)
{
	long result;
	if (n >= 1)
		result = 1;
	else
		result = n * rfact(n-1);
	return result;
}

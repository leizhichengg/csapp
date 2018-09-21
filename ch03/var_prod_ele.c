/*************************************************************************
	> File Name: var_prod_ele.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Fri 21 Sep 2018 10:44:39 AM CST
 ************************************************************************/

int var_prod_ele(long n, int A[n][n], int B[n][n], long i, long k)
{
	long j;
	int result = 0;

	for(j = 0; j < n; j++)
		result += A[i][j] * B[j][k];

	return result;
}

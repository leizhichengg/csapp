/*************************************************************************
	> File Name: fix_prod_ele.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 20 Sep 2018 11:10:27 AM CST
 ************************************************************************/

#define N 16
typedef int fix_matrix[N][N];

int fix_prod_ele(fix_matrix A, fix_matrix B, long i, long k)
{
	long j;
	int result = 0;
	for(j = 0; j < N; j++)
		result += A[i][j] * B[j][k];
	return result;
}

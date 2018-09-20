/*************************************************************************
	> File Name: fix_set_diag_opt.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Thu 20 Sep 2018 05:16:14 PM CST
 ************************************************************************/

#define N 16
typedef int fix_matrix[N][N];

void fix_set_diag_opt(fix_matrix A, int val)
{
	int *Aptr = &A[0][0];
	int i = 0;
	do{
		Aptr[i] = val;
		i += (N + 1);
	}
	while(i != N * (N + 1));
}

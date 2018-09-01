/*************************************************************************
	> File Name: switcher.c
	> Author: withlzc
	> Mail: withlzc@163.com 
	> Created Time: Sat 01 Sep 2018 09:41:26 PM CST
 ************************************************************************/

void switcher(long a, long b, long c, long *dest)
{
	long val;
	switch(a)
	{
		case 5:
			c = b ^ 15;
		case 0:
			val = c + 112;
			break;
		case 2:
		case 7:
			val = (c + b) << 2;
			break;
		case 4:
			val = a;
			break;
		default:
			val = b;
	}
	*dest = val;
}


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int a = 0, b = 0, c = 0, sum = 0,n=1;
	printf("从1到100000的水仙花数有");
	for (a = 0; a <= 100000; a++)
	{
		c = a;//防止改变计数器a的值，因为每次要递增a
		n = log10(a)+1;//log10()是对数函数以10为底,判断一个数的位数
		for (sum=0; c > 0;) {
			b = c % 10;
			sum = sum + pow(b,n);
			c = c / 10;
		}
		if (a==sum)
			printf("%d，", a);
	}
	return 0;
}
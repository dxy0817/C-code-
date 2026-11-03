#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int a = 0, b = 0, n = 0,N=0,sum=0,c=0;
	printf("四位数中回文数有");
	for (n = 1000; n <10000; n++) {
		a = n;//因为要递增计数器，因此不能改变计数器的值，故将计数器的值赋给a，在循环中只需改变a的值。
		sum = 0;//在循环中会改变sum的值，因此每次进入循环前都要对sum进行初始化
		for (; n >= 0;) {
			b = a % 10;
			sum = sum*10+b;//将反过来的数组成一个四位数
			a = a / 10;
			if (a==0)//防止进入死循环，当a=0时，说明已经全部反过来了
				break;
		}
		if (n == sum) {
			printf("%d  ", n);
			c++;//判断回文数的个数；
		}
}
	printf("\n共有%d个回文数", c);
	return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int x0=0, d = 0, i=0;
	float x = 0, y = 0, a = 0,c=0,t=1e-5,n=0,cat=0;
	int N = 0;
	printf("请输入一元N次方程的N\n");
	scanf_s("%d", &N);
	float* arror = (float*)malloc((N+1)* sizeof(float));
	printf("请按倒序输入系数的值\n");
	for (i = 0; i<(N+1); i++) {
		scanf_s("%f", arror+i);
	}
		for (x0 = -100; x0 <= 100; x0++) {
			x = 1.0 * x0;
			y = 0;
			for (d=0;d<=N;d++) {
				y=y+arror[d] * pow(x, d);
				a=a+arror[d] * pow(x + t, d);
				cat=cat+arror[d] * pow(x, d);
			}
			x = x - y /( (a-cat)/t);
			if(fabs(y)<=1e-2)//也可以用f(x)/f'(x)的值来判断
				printf("零点为%f\n", x);
			
		}
		free(arror);
		arror = NULL;
	return 0;
}
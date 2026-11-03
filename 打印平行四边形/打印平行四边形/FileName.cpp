#include<stdio.h>
int main() {
	int a=0,H = 0, c = 0,N=0;
	float tan = 0,b=0;
	printf("please input 第一行的*数N,高H,角的tan值\n");
	scanf_s("%d,%d,%f", &N,&H,&tan);
	for (a = 1; a <= H; a++)
	{
		printf("\n");
		for (b=1;b<=(H-a)*tan;b++)//不同角度下的平行四边形
		{
			printf(" ");//打印H-a个空格
		}
		for (c = 0; c <= N; c++)
				printf("* ");
	}
	return 0;
}
#include<stdio.h>;
#include<stdlib.h>;
int main()
{
	int a = 0, b = 0, c = 0,d=0,e=0;
	a = 328;
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	e = b + c + d;
	printf("e=%d", e);
	return 0;

}
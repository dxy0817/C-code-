#include<stdio.h>
#include<math.h>
#define eps 1e-9
int main() {
	long long int m = 1, n = 1,N=1,fac=1,sign=-1;
	long double y= 0,x=0;
	printf("请输入项数N和x的值\n");
	scanf_s("%lld,%Lf",&N,&x);
	for (n = 1; n <= N; n += 2) {
		fac = 1;
		sign = -sign;
		for (m = 1; m <= n; m ++) {
				fac*=m;
		}
		if ((1.0 / fac) > eps)
			y+= (sign * pow(x, n)) / (1.0 * fac);
		else
			break;
	}
	printf("sin(%Lf)=%.10Lf", x, y);
	return 0;
}
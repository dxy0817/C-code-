#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, d = 0;
	printf("Please input a,b,c\n");
	scanf_s("%f,%f,%f", &a, &b, &c);
	d = sqrt(pow(b, 2) - 4 * a * c);
	if (a == 0) {
		if (b == 0)
			printf("常数等于零，无解\n");
		else {
			x1 = -c / b;
			printf("x1=%f", x1);
		}
	}

	else {
		if (d >= 0) {
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			if (d == 0)
				printf("x1=%f\n", x1);
			else
				printf("x1=%f,\nx2=%f", x1, x2);

		}
		else
			printf("此方程无解");

	}
	return 0;
}
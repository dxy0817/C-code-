#include<stdio.h>
int main() {
	float num = 0, sum = 0, average = 0, max = 0, min = 0;
		printf("请输入数字\n");
		scanf_s("%f", &num);
		for (int count = 0; scanf_s("%f", &num) == 1;) {
				if (0 <= num && num <= 100) {
					sum = sum + num;
					if (num > max || max == 0)
						max = num;
					if (num < min || min == 0)
						min = num;
					count++;
					average = sum / count;
				}
			}
	printf("以上数字中最大数为%f，最小数为%f，平均值为%f", max, min, average);
	return 0;
}
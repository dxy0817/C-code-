#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 51
int main() {
	int num = 0, D_value = 0;;
	//_strlwr_s把大写转化为小写
	char a[size], b[size];
	gets_s(a);
	for (int i = 0; i < size; i++) {
		b[i] = a[i] + 32;
		if (a[i] == '\0') {
			b[i] = '\0';//因为没有对b[]进行初始化，因此b[i]里面可能存有其他东西，因此要在结束的时候给b加一个空字符
			break;
		}
			
	}
	printf("%s的小写是%s\n", a,b);
	_strlwr_s(a);
	printf("函数_strlwr_s的结果为%s\n", a);
	printf("\n");
	
	//strlen
	for (int j = 0; j < size; j++) {
		if (a[j] == '\0') {
			num = j;
			break;
		}
	}printf("字符串的长度为%d\n", num);
	printf("利用函数strlen求出字符串长度为%d\n", strlen(a));
	printf("\n");
	//strcmp函数
	_strupr_s(a);
	if (strcmp(a, b) < 0)
		printf("字符串a小于字符串b\n");
	if (strcmp(a, b) > 0)
		printf("字符串a大于字符串b\n");
	if (strcmp(a, b) == 0)
		printf("字符串a等于字符串b\n");
	for (int k = 0; k < size; k++) {
		D_value =D_value+ a[k] - b[k];
		if (a[k] == '\0' || b[k] == '\0')
			break;	
	}
	if (D_value < 0)
		printf("字符串a小于字符串b\n");
	if (D_value > 0)
		printf("字符串a大于字符串b\n");
	if (D_value == 0)
		printf("字符串a等于字符串b\n");
	printf("\n");
	//strcpy函数
	char c[size], d[size],e[size];
	gets_s(c);
	strcpy_s(d, c);
	printf("%s,%s\n", c, d);

	for (int l = 0; l < size; l++) {
		e[l] = c[l];
		if (c[l] == '\0')
			break;
	}
	printf("%s,%s\n", c, e);
	printf("\n");
	//strcat函数
	char jv[size]="I love you,", zi[size]="China",jv1[size]="I love you,";
	int n = 0,y=0;
	strcat_s(jv, zi);//无返回值，只是一个将zi里的字符续接到jv里的函数
	printf("%s\n", jv);
	printf("\n");
	for (int m = 0; m < size; m++) {
		if (jv1[m] == '\0') {
			n = m;
			break;
		}
	}
	for (int w = n; w < size; w++) {
		
		jv1[w] = zi[y];
		y++;
		if (zi[y] == '\0')
			break;
	}
	printf("%s", jv1);
	return 0;
}
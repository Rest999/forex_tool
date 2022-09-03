#include <stdio.h>
#include <stdlib.h>

double a; 
double b;
double c;
int ans;

int main(void) {
	printf_s("現在の値段を入力してください\n");
	scanf_s("%lf", &a);
	printf_s("到達希望の値段を入力してください\n");
	scanf_s("%lf", &b);
	printf_s("Lotを入力してください\n");
	scanf_s("%lf", &c);

	double d = c * 1000;
	ans = (b - a) * d;
	printf_s("利益は%d円です\n", ans);
	
	system("PAUSE");
	return 0;
}

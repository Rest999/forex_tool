#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	double b;
	double c;
	int e;
	double f;
	double g;
	double ans;

	printf_s("残高を入力してください");
	scanf_s("%d",&a);

	printf_s("リスク許容率を入力してください");
	scanf_s("%lf",&b);

	c = a * b;

	printf_s("損切ラインを入力してください");
	scanf_s("%d", &e);
	printf_s("現在のスプレッドを入力してください");
	scanf_s("%lf", &f);

	g = e + f;

	ans = c / g / 1000;

	printf_s("適正lotは%fです\n", ans);
	
	system("PAUSE");
	return 0;
}

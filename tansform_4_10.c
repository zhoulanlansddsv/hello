//#include <stdio.h>
//void printd(int n) {
//	if (n < 0) {
//		putchar('-');
//		n = -n;
//	}
//	if (n / 10)
//		printd(n / 10);
//	putchar(n % 10 + '0');
//}
//
//int main() {
//	printd(12345);
//	putchar('\n');
//	return 0;
//
// }
//#include <stdio.h>
//#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS 
//#define MAXLINES 5000
//
//char *lineptr[MAXLINES];
//
//void swap(char* v[], int i, int j) {
//	char *temp;
//	temp = v[i];
//	v[i] = v[j];
//	v[j] = temp;
//}
//
//int readlines(char *lineptr[], int nlines);
//void writelines(char *lineptr[], int nlines);
//
//void qsort(char *v[], int left, int right) {
//	int i, last;
//	void swap(char* v[], int i, int j);
//
//	if (left >= right)
//		return;
//	swap(v, left, (left + right) / 2);
//	last = left;
//	for (i = left + 1; i <= right; i++)
//		if (strcmp(v[i], v[left]) < 0)
//			swap(v, ++last, i);
//	qsort(v, left, last - 1);
//	qsort(v, last + 1, right);
//
//}
//
//main() {
//	int nlines;
//
//	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
//		qsort(lineptr, 0, nlines - 1);
//		writelines(lineptr, nlines);
//		return 0;
//	}
//	else {
//		printf("error: input too big to sort\n");
//		return 1;
//	}
//}
//
//#define MAXLEN 1000
//int getline(char*, int);
//char* alloc(int);
//
//int readlines(char* lineptr[], int maxlines) {
//	int len, nlines;
//	char* p, line[MAXLEN];
//	nlines = 0;
//	while ((len = getline(line, MAXLEN)) > 0)
//		if (nlines >= maxlines || (p = alloc(len)) == NULL)
//			return -1;
//		else {
//			line[len - 1] = '\0';
//			strcpy(p, line);
//			lineptr[nlines++] = p;
//		}
//	return nlines;
//}
//
//void writelines(char* lineptr[], int  nlines)
//{
//	while(nlines-- >0)
//		printf("%s\n", *lineptr++);
//}
//第四章
//9一个正整数 
//#include <stdio.h>	
//#include <math.h>
//int main()
//{
//	int  num, indiv, ten, hundred, thousand, ten_thousand, place;
//	printf("请输入一个正整数(0-99999：");
//	scanf("%d", &num);
//	if (num > 9999)
//		place = 5;
//	else if (num > 999)
//		place = 4;
//	else if (num > 99)
//		place = 3;
//	else if (num > 9)
//		place = 2;
//	else
//		place = 1;
//	printf("该数是一个%d位数\n", place);
//	printf("该数的各位数字为：\n");
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//	ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//	indiv = num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;
//	switch (place)
//	{
//	case 5:printf("%d%d%d%d%d", ten_thousand, thousand, hundred, ten, indiv);
//		printf("\n反序数字：");
//		printf("%d%d%d%d%d", indiv, ten, hundred, thousand, ten_thousand);
//		break;
//	case 4:printf("%d%d%d%d", thousand, hundred, ten, indiv);
//		printf("\n反序数字：");
//		printf("%d%d%d%d", indiv, ten, hundred, thousand);
//		break;
//	case 3:printf("%d%d%d", hundred, ten, indiv);
//		printf("\n反序数字：");
//		printf("%d%d%d", indiv, ten, hundred);
//		break;
//	case 2:printf("%d%d", ten, indiv);
//		printf("\n反序数字：");
//		printf("%d%d", indiv, ten);
//		break;
//	case 1:printf("%d", indiv);
//		printf("\n反序数字：");
//		printf("%d", indiv);
//		break;
//	}
//	return 0;
//
//
// 
// 
// }
//11从小到大输出
//#include <stdio.h>
//int main()
//{
//	int t, a, b, c, d;
//	printf("请输入四个整数：");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//if (a > b)
//	{
//		t = a; a = b; b = t;
//}
//	if (a > c)
//	{
//		t = a; a = c; c = t;
//	}
//	if (a > d)
//	{
//		t = a; a = d; d = t;
//	}
//	if (b > c)
//	{
//		t = b; b = c; c = t;
//	}
//	if (b > d)
//	{
//		t = b; b = d; d = t;
//	}
//	if (c > d)
//	{
//		t = c; c = d; d = t;
//	}
//	printf("从小到大输出结果为：\n");
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	return 0;
//12建筑
//#include <stdio.h>
//int main()
//{
//	int eigt= 10;
//	float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2,y3=-2,x4=2,y4=-2,x,y,d1,d2,d3,d4;
//	printf("请输入你的坐标(x,y)：");
//	scanf("%f%f", &x, &y);
//	d1 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
//	d2 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//	d3 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
//	d4 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
//	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) eigt = 0;
//	printf("%d\n", eigt);return 0;
//第五章
//3最大公约数加最小公倍数
//#include <stdio.h>
//int main()
//{
//	int m, n, a, b, t, gcd, lcm;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &m, &n);
//	a = m; b = n;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	gcd = a;
//	lcm = m * n / gcd;
//	printf("最大公约数=%d\n", gcd);
//	printf("最小公倍数=%d\n", lcm);
//	return 0;
//}8水仙花数
//#include <stdio.h>
//int main()
//{
//	int i, j, k, num;
//	printf("水仙花数有：\n");
//	for (i = 1; i <= 9; i++)
//		for (j = 0; j <= 9; j++)
//			for (k = 0; k <= 9; k++)
//			{
//				num = i * 100 + j * 10 + k;
//				if (num == i * i * i + j * j * j + k * k * k)
//					printf("%d\n", num);
//			}
//	return 0;
//}9完数
//#include <stdio.h>
//int main()
//{
//	int i, j, sum;
//	printf("完数有：\n");
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (j = 1; j <= i / 2; j++)
//			if (i % j == 0)
//				sum = sum + j;
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}10求数
//#include <stdio.h>
//int main()
//{
//	int i, n = 20;
//	double a = 2, b = 1, sum = 0,t;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + a / b;
//		t = a; a = a + b; b = t;
//	}
//	printf("前%d项之和为：%lf\n", n, sum);
//	return 0;
//}11球反弹
//#include <stdio.h>
//int main()
//{
//	int i, n = 10;
//	double h = 100, sum = 100;
//	for (i = 1; i < n; i++)
//	{
//		h = h / 2;
//		sum = sum + 2 * h;
//	}
//	printf("第%d次落地时，共经过%lf米，第%d次反弹高度为%lf米\n", n, sum, n, h / 2);
//	return 0;
//}
//12猴子吃桃
//#include <stdio.h>
//int main()
//{
//	int i, n = 10;
//	double m = 1;
//	for (i = 1; i < n; i++)
//		m = (m + 1) * 2;
//	printf("第一天摘了%lf个桃子\n", m);
//	return 0;
//}16图案
//#include <stdio.h>
//int main()
//{
//	int i, j, n = 5;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = n - 1; i >= 1; i--)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}第六章
//1素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j, n = 100, flag;
//	printf("100以内的素数有：\n");
//	for (i = 2; i <= n; i++)
//	{
//		flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}6杨辉三角
//#include <stdio.h>
//#define MAX 20
//int main()
//{
//	int i, j, triangle[MAX][MAX];
//	for (i = 0; i < MAX; i++)
//		for (j = 0; j <= i; j++)
//			if (j == 0 || j == i)
//				triangle[i][j] = 1;
//			else
//				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//	for (i = 0; i < MAX; i++)
//	{
//		for (j = 0; j < MAX - i - 1; j++)
//			printf(" ");
//		for (j = 0; j <= i; j++)
//			printf("%4d", triangle[i][j]);
//		printf("\n");
//	}
//	return 0;
//}第八章
//18月份
//#include <stdio.h>
//int main()
//{
//	char* month[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	int n;
//	printf("请输入月份(1-12)：");
//	scanf("%d", &n);
//	if (n < 1 || n>12)
//		printf("月份输入错误！\n");
//	else
//		printf("该月份是：%s\n", month[n - 1]);
//}第九章1日期
#include <stdio.h>
struct 
{
	int year;
	int month;
	int day;
}date;

int main()
{
	int i, days;
	int day_tabs[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


	printf("请输入日期(年 月 日)：");
	scanf("%d%d%d", &date.year, &date.month, &date.day);
	days = 0;
	for (i = 1; i < date.month; i++)
		days += day_tabs[i];
	days = days + date.day;
	if((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0))
		if (date.month > 2)
			days++;
	printf("您输入的日期是：%d年%d月%d日是第%d天\n", date.year, date.month, date.day,days);
	return 0;
}
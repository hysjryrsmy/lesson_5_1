#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//请实现一个程序，先读入两个整数，k,b,输出y = k*x+b直线方程中x=1 到x=100时的y的值
/*
int f(int k, int b, int x) {
	return k * x + b;
}

int main()
{
	int k, b;
	scanf("%d %d", &k, &b);
	for (int i = 1; i < 100; i++) {
		printf("f(%d) = %d\n", i, f(k, b, i));
	}
	return 0;
}
*/

//递归程序
/*组成部分
1.语义信息   -> fib(i)代表什么含义
2.边界条件处理 -> 设置递归函数的出口
3.针对于问题的处理过程和递归过程(推导式)
4.结果返回
*/

// 请实现一个程序，读入n，计算n的阶乘  （数学归纳法）
int fac(int n) {
	if (n == 1) return 1;
	return n * fac(n - 1);//向下递推；向上回溯
}

int main()
{
	int n;
	while (~scanf("%d", &n)) {
		printf("fac(%d) = %d\n", n, fac(n));
	}
	return 0;
}
/*递归的优点
 设计+实现简单
*/
#include<stdio.h>

void func(void);

int main(void)
{
	extern int count;//extern:告诉编译器，先别急着报错，count定义在下面
	func();
	count++;
	printf("In main,count=%d", count);

	return 0;
}

int count;

void func(void)
{
	count++;
	printf("In func,count=%d\n", count);
}
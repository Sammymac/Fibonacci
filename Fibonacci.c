#include <stdio.h>

int fib_setup(int counter)
{
	return fib(counter, 0, 1);
}

int fib(int counter,int num1,int num2)
{
	return counter > 1 ? fib(counter-1, num2, num1+num2) : num1+num2;
}

int main()
{
	printf("%d", fib_setup(4));
}
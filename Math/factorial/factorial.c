#include <stdio.h>

unsigned long long factorial(int number)
{
	unsigned long long result = 1;
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
	return result;
}

unsigned long long factorialRecursive(unsigned long long x)
{
	if (x != 1) return (x * factorialRecursive(x - 1));
	return x;
}

int main()
{
	unsigned long long number = 20;
	unsigned long long result;

	result = factorial(number);
	printf("Factorial\n%llu! = %llu\n", number, result);

	result = factorialRecoursive(number);
	printf("Recursive factorial\n%llu! = %llu\n", number, result);
	return 0;
}
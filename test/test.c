#include <stdio.h>

int main()
{
	int n;

	n = 1;
	for (int i = 0; i < 10; i++)
		printf("%d\n", (n <<= 1));
	printf("%d", sizeof(unsigned long int) * 8 - 1);
	return 0;
}

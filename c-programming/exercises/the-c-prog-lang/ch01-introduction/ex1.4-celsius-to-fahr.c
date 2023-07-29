#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;

	printf("%s%15s\n", "Celsius", "Fahrenheit");
	printf("%s%15s\n", "=======", "==========");
	while (celsius <= upper)
	{
		fahr = celsius * 1.8 + 32;

		printf("%5.0f°%13.1f°\n", celsius, fahr);
		celsius += step;
	}

	return (0);
}

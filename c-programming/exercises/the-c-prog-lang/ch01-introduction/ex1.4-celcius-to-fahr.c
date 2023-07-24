#include <stdio.h>

int main(void)
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	celcius = lower;
	
	printf("%s%15s\n", "Celcius", "Fahrenheit");
	printf("%s%15s\n", "=======", "==========");
	while (celcius <= upper)
	{
		fahr = celcius * 1.8 + 32;
		
		printf("%5.0f°%13.1f°\n", celcius, fahr);
		celcius += step;
	}

	return (0);
}

#include <stdio.h>

float c_to_f(float c);

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 40;
	step = 4;

	celsius = lower;

	printf("%10c %6c\n", 'C', 'F');
	while (celsius <= upper) {
		fahr = c_to_f(celsius);
		printf("%10.0f %6.1f\n", celsius, fahr);

		celsius = celsius + step;
	}
	
	return 0;
}

float c_to_f(float c) {
	return c * 9 / 5 + 32;
}

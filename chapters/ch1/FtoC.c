#include <stdio.h>


int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("%10c %6c\n", 'F', 'C');
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}


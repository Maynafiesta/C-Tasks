
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include "nutility.h"

int isprime(int x) {
	if (x < 2)
		return 0;

	if (x % 2 == 0)
		return x == 2;

	if (x % 3 == 0)
		return x == 3;

	if (x % 5 == 0)
		return x == 5;

	for (int i = 7; i * i <= x; i += 2) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int ndigit(int val) {
	if (val == 0)
		return 1;

	int digit_counter = 0;

	while (val) {
		++digit_counter;
		val /= 10;
	}
	return digit_counter;
}

void dashline(void) {
	printf("\n-------------------------------------------------------------------------------\n");
}

void sleep(double sec) {
	Sleep((DWORD)(sec * 1000));
}

void randomize(void) {
	srand((unsigned)time(NULL));
}

void set_array_random(int* p, int size) {
	while (size--) {
		*p++ = rand() % 1000;
	}
}

void print_array(const int* p, int size) {
	for (int i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	dashline();

}

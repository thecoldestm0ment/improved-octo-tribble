#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double hour(double n, double length) {
	return length/n;
}
double year(double n, double length) {
	return length / n / (365*24);
}

int main() {
	double l = 75000000.0;
	double v;
	scanf("%lf", &v);
	printf("%lf�ð�, %lf��", hour(l,v), year(l,v));

	return 0;
}
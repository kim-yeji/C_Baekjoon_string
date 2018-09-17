#include<stdio.h>

int main() {
	int x, y, x1=0, y1 = 0;
	int f[2] = { 0 }, m[2] = { 0 }, l[2] = { 0 };
	scanf("%d %d", &x, &y);
	f[0] = x / 100;
	m[0] = (x % 100) / 10;
	l[0] = (x % 100) % 10;

	f[1] = y / 100;
	m[1] = (y % 100) / 10;
	l[1] = (y % 100) % 10;

	x = (l[0] * 100) + (m[0] * 10) + (f[0]);
	y = (l[1] * 100) + (m[1] * 10) + (f[1]);
	if (x > y) printf("%d", x);
	else printf("%d", y);
	return 0;
}
#include<stdio.h>
int a[26];
int main() {
	int cnt = 0, num = 0, max = 0, p = 0;
	char str[1000001];
	scanf("%s", str);
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			num = str[i] - 'a';
		}
		else {
			num = str[i] - 'A';
		}
		a[num]++;
		if (max < a[num]) {
			max = a[num];
			p = num + 'A';
		}
		else if (max == a[num]) {
			p = '?';
		}
	}

	printf("%c", p);
	return 0;
}
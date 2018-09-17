#include<stdio.h>
char s[101];
int cnt,num;

int main() {
	scanf("%d", &num);
	while (num--) {
		scanf("%s", s);
		bool a[28] = {};
		bool flag = true;
		a[s[0] - 'a'] = true;
		for (int i = 1; s[i] != NULL; i++) {
			if (a[s[i] - 'a']) {
				if (s[i] == s[i - 1]) {
					continue;
				}
				else {
					flag = false;
				}
			}
			else {
				a[s[i] - 'a'] = true;
			}
		}
		if (flag) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
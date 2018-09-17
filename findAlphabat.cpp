#include<stdio.h>
int alpha[26];
char str[101];
int main() {
	
	scanf("%s", str);
	for (int j = 0; str[j] != NULL; j++) {
		if (alpha[str[j] - 'a']==0) {
			alpha[str[j]-'a']=j+1;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]-1);
	}
	return 0;
}


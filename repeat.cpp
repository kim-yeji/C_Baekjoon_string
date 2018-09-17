#include<stdio.h>
char str[22];
int main() {

	int repeat,num;
	scanf("%d", &repeat);
	while(repeat--){
		scanf("\n%d %s", &num, str);
		for (int i = 0; str[i] != NULL; i++) {
			for (int j = 0; j < num; j++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
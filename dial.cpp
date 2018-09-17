#include<stdio.h>
char s[17];
int ans;
int main(){
	
	scanf("%s", s);
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] >= 'Z') s[i]--; //z먼저 해주는 이유는 s에서 한 번 줄여줌
		if (s[i] >= 'S') s[i]--;
		ans += ((int)s[i] - 'A') / 3 + 3;
	}
	printf("%d", ans);
	return 0;
}

//a=3,b=3,c=3
//d=4,e=4,f=4 ... 이런식인데 4/3 +3 = 4(초)

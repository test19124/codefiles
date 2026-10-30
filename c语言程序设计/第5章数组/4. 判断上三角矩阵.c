#include <stdio.h>

int n,a[10][10];

int main() {
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		for(int j = 0;j < n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0;j < i; j++) {
			if(a[i][j] != 0) {
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}
#include <stdio.h>
int a[30], b[30], c[60];
int sa, sb, sc = 0;
int check(int n) {
	for (int i = 0; i < sc; i++) {
		if (c[i] == n) return 0;
	}
	return 1;
}
void insert_desc(int x) {
	if (check(x) == 0) return;	
	int j = sc;
	while (j > 0 && c[j - 1] < x) {
		c[j] = c[j - 1];
		j--;
	}
	c[j] = x;
	sc++;
}
int main() {
	scanf("%d", &sa);
	for (int i = 0; i < sa; i++) {
		scanf("%d", &a[i]);
	}	
	scanf("%d", &sb);
	for (int i = 0; i < sb; i++) {
		scanf("%d", &b[i]);
	}	
	for (int i = 0; i < sa; i++) {
		insert_desc(a[i]);
	}	
	for (int i = 0; i < sb; i++) {
		insert_desc(b[i]);
	}	
	for (int i = 0; i < sc; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");
	return 0;
}
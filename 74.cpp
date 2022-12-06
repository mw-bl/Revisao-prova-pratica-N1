#include <stdio.h>

int main() {
	int n;
	
	for (int i =1; i <= 9; i++){
		printf("\n%d x %d = %d\n", i, n, n*i);
		for (int n =1; n <=10; n++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
	}
	return 0;
}

#include<stdio.h>
int i, j, rows = 5;
int main(){
	for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d",j);
        }
		printf("\n");
	}
	return 0;
}

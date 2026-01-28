#include<stdio.h>
int main(){
	printf("A\n");
	fork();
	printf("B\n");
	fork();
	printf("c\n");
}

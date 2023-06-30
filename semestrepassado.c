#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[3][3];
	int i,j;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
		printf("digite valor:\n");
		scanf("%d",&mat[i][j]);
		}
	}
	printf("matriz original:");
	printf("\n\n");
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
		printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n,i,x,cont = 0;
	printf("digite n\n");
	scanf("%d",&n);
	printf("digite x\n");
	scanf("%d",&x);
	int *vetor = malloc (n * sizeof(int));
	for(i = 0;i<n;i++){
		printf("digite valor para o vetor na pos %d\n",i);
		scanf("%d",&vetor[i]);
		}
	printf("multiplos de %d: \n",x);
	for(i = 0;i<n;i++){
		if(vetor[i] % x == 0){ 
			printf("%d\n",vetor[i]);
			cont++;
			}
		}
	printf("total de multiplos: %d",cont);
	return 0;
}


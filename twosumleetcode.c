#include <stdio.h>

int main(int argc, char **argv)
{
	int v[4] = {2,7,11,15};
	int target = 9;
	int i,j;
	size_t tam = sizeof(v) / sizeof(int);
	for(i = 0;i<tam;i++){
		for(j = 0;j<tam;j++){
			if(v[i] + v[j] == target){
				printf("[%d,%d]",i,j);
				return 0;
				}
			}
		}
	
	
	return 0;
}


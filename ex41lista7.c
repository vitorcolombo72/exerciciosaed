#include <stdio.h>

int maior(int *v){
	int i,j = v[0];
	for(i = 0; i<10;i++){
		if(v[i] > j){
			j = v[i];
			}
		}
	return j;
	}

int main(int argc, char **argv)
{
	int v[10] = {1,2,23,15,5,6,7,8,9,10};
	int j = maior(v);
	printf("%d",j);
	return 0;
}


#include <stdio.h>

int main(int argc, char **argv)
{
	int i,v[5] = {10,22,34,64,58};
	for(i = 0;i<5;i++){
		if(v[i] % 2 == 0){
			printf("%p\n",&v[i]);
			}
		}
	return 0;
}


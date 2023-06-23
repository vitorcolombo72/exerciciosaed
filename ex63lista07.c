#include <stdio.h>
#include <string.h>

int compara(char *a1,char *a2){
	int i = strcmp(a1,a2);
	return i;
	}

int main(int argc, char **argv)
{
	char i[10], k[10];
	strcpy(i,"abdet");
	strcpy(k,"abdeT");
	
	int l = compara(i,k);
	if(l == 0) printf("igual");
	else printf("diferente");
	return 0;
}


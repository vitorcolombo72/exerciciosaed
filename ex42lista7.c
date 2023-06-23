#include <stdio.h>

float media(float *m){
	int i;
	float t;
	for(i = 0;i<8;i++){
		t = t + m[i];
		}
		return t / 8;
	}

int main(int argc, char **argv)
{
	float v[8] = {10,10,10,10,5,5,5,5};
	float j = media(v);
	printf("%f",j);
	return 0;
}



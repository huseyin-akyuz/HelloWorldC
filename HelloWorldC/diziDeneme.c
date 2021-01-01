#include<stdio.h>
int main(){
	int d[10];
int* diziptr;
diziptr = d;
  for (int i = 0; i < 20; i++) {
	d[i] = rand();

	printf("%d\n", d[i]);

  } 
}
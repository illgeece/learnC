#include <stdio.h>
#include <stdlib.h>
int main(void){
	printf("input number of integers to allocate\n");
  int num; 
  scanf("%d", &num);
  int *ptr = (int*)malloc(num*sizeof(int));
	if(ptr==NULL){
		printf("not allocated\n");
		exit(0);
	} else {
		printf("%d bytes of memory successfully allocated\n", (int)(num*sizeof(int)));
		free (ptr);
		printf("cleared\n");}
return 0;
}

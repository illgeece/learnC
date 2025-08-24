#include <stdio.h>

void main(){
	ptr = (int*)malloc(4*sizeof(int));
	if(ptr==NULL){
		printf("not allocated\n");
		exit(0);
	} else {
		printf("Memory successfully allocated\n");
		free (ptr);
		printf("cleared\n");}
}

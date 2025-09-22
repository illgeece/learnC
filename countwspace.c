#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
FILE *file;
int c, ntab, nspace, nnewline, nother;
if(argc!=2){
  printf("Usage: %s <filename>\n", argv[0]);
  return 0;
}
file=fopen(argv[1], "r");
if(file==NULL){
  printf("could not open file\n");
  return 0;
}

ntab=nspace=nnewline=nother=0;

while((c=fgetc(file))!=EOF){
  if(c==' '){++nspace;} //space count, most common
  else if(c=='\t'){++ntab;} //tab count
  else if(c=='\n'){++nnewline;} //newline count
  else{++nother;}//character 
}
fclose(file);
printf("file: %s\n", argv[1]);
printf("tabs: %d, spaces: %d, newlines: %d, characters: %d\n", ntab, nspace, nnewline, nother);

return 1;
}

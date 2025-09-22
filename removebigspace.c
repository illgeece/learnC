#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
FILE *input, *output;
int c, spacecount, linenum;
c=spacecount=linenum=0;
char outputname[50];
if(argc!=2){
  printf("Must attatch only one file\n");
  return 0;
}
input=fopen(argv[1], "r");
if(input==NULL){
  printf("file not fount\n");
  return 0;
}
//output file open
sprintf(outputname, "%s_despaced", argv[1]);
output=fopen(outputname, "w");
if(output==NULL){
  printf("file not created\n");
  return 0;
}

while((c=fgetc(input))!=EOF){
  if(c=="\n"){
    ++linenum;
    fputc(' ', output);
    fputc(linenum, output);
    fputc(' ', output);
  }
  else if(c==' '){
    ++spacecount;
    if(spacecount==1){fputc(c, output);} //if first space, put in file
  } else{ //if not space, put in file and reset spacecount
    spacecount=0;
    fputc(c, output);
  }
}

fclose(input);
fclose(output);
printf("cleared file created: %s\n", outputname);
return 1;
}
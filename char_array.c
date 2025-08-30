#include <stdio.h>
#define MAXLINE 100
int getline_custom(char s[], int lim);
void copy(char to[], char from[]);

int main(void){
  int len, max; //current line len, max length seen so far 
  char line[MAXLINE]; //current input line
  char longest[MAXLINE]; //longest line storage array
  
  max=0;
  while((len=getline_custom(line, MAXLINE))>0)
    if(len>max){
      max=len;
      copy(longest, line);
    }
  if(max>0)
    printf("%s", longest);
  return 0;
}

int getline_custom(char s[], int lim){
  int c, i;
  for(i=0; i<lim-1&& (c=getchar())!= EOF && c!='\n'; ++i)
//increments the line count from zero, checks if line # less than line limit as 
//well as the next character not being EOF or newline, c is assigned every time in the loop
    s[i]=c;
  if(c=='\n'){ //if end of line store final character and increment the line count
    s[i]=c;
    ++i;
  }
  s[i] = '\0';
  return i; //returns number of lines
}

void copy(char to[], char from[]){
  int i;
  i=0;
  while((to[i]=from[i])!='\0')
    ++i;
}

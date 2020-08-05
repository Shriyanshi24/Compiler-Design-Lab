#include<stdio.h>
#include<stdlib.h>
int main()
{
  int numOfchar=0,numofLines=0,numOfwords=0;
  char ch;
  FILE *file;
  char path[100];
  //printf("enter the filename:");
  //scanf("%s",path);
  file=fopen("samples.txt","r");
  while((ch=fgetc(file))!=EOF)
  {
    numOfchar++;
    if(ch=='\n')
    {
      numofLines++;
    }
    if(ch==' '|| ch=='\t' || ch=='\n')
    {
      numOfwords++;
    }

  }
  if(numOfchar>0)
  {
    numOfwords++;
    numofLines++;
  }
  printf("No of charcaters : %d\n",numOfchar);
  printf("No of words are : %d\n",numOfwords);
  printf("No of lines are: %d\n",numofLines);
  fclose(file);
  return 0;
}
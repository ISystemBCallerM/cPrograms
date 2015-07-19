//This program takes a file name as an agrument, and prints out every line of text within it.
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
   FILE *fptr;
   fptr=fopen(argv[1],'w');
   if(fptr==NULL){
      printf("Error!");
      exit(1);
   }
   int i = 2;
   char* line;
   while(fgets(line,sizeof line,fptr)!=NULL)
	{
	   fputs(line,stdout);
	}
   fclose(fptr);
   return 0;
}

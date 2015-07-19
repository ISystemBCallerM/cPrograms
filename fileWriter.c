//This program takes a file name as argument one, and then every argument after is printed into the file.
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv)
{
   FILE *fptr;
   fptr=fopen(argv[1],"w");
   if(fptr==NULL){
      printf("Error!");
      exit(1);
   }
   int i = 2;
   while(i<argc)
	{
	   fprintf(fptr,"%s",argv[i]);
		i++;
	}
   fclose(fptr);
   return 0;
}

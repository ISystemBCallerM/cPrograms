//This program will convert a given command line string to all lower bases.It will do this by firtt finding the highest symbol
//and then find the value of the argument in every base where the highest symbol is 10 or lower.
#include <stdio.h>
int convertToInt(char* arg);
char* convertToBinary(int arg);
int main(int argc,char* args[]){
	printf("%s in binary is: ",args[1]);
	printf("%s",convertToBinary(convertToInt(args[1])));
	return 0;
}
int convertToInt(char arg[]){
	int returnINT = 0;
	int i = sizeof(arg);
	int count = 1;
	int temp = 0;
	while(i>=0){
		if(arg[i]=='1')
			temp=10;
		else if(arg[i]=='2')
			temp=2;
		else if(arg[i]=='3')
			temp=3;
		else if(arg[i]=='4')
			temp=4;
		else if(arg[i]=='5')
			temp=5;
		else if(arg[i]=='6')
			temp=6;
		else if(arg[i]=='7')
			temp=7;
		else if(arg[i]=='8')
			temp=8;
		else if(arg[i]=='9')
			temp=9;
		returnINT+=temp*10;
		temp=0;
		count=count+1;
		i=i-1;
	}
	return returnINT;
}
char* convertToBinary(int arg){
	
}

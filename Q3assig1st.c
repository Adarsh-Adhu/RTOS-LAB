/* Read a string from a file. Count the number of characters in a given string without making use of the string library function. 
Use ?for loop?. Get the input using ?fscanf?. Use functions and pass string by reference.*/
#include<stdio.h>
int strlength(char str[])
{   int i=0;
	while(str[i]!='\0'){
	i++;
	}
	return i-1;
}
int main()
{  char string[200];
   	FILE *fptr;
   fptr=fopen("ex3_ip.txt","r");
   for(int i=0;!feof(fptr);i++)
   {
     fscanf(fptr,"%c",&string[i]);	
   }
   
   fclose(fptr);
   printf("String from file: \n%s",string);
   printf( "\nThe length of the string read from the file is :%d\n",strlength(string));
   return 0;
}
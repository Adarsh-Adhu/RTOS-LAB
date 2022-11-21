/*Read a text file called input.txt and segregate the even (2nd,4th, 6th , 8th …) and 
odd (1st,3rd,5th, 7th …) words into two different files names even.txt and odd.txt. 
Get the names of input and output files through command line arguments.*/
#include<stdio.h>
int main()
{ 
 FILE *inp,*even,*odd;
 char a[30];
 inp=fopen("input.txt","r");
 even=fopen("even.txt","w");
 odd=fopen("odd.txt","w");
 for(int i=1;!feof(inp);i++)
 {  fscanf(inp,"%s",a);
 	if(i%2!=0)
 	 { fprintf(odd,"%s ",a);
      }
      else
      {
      	fprintf(even,"%s ",a);
      }

 }
 fclose(inp);
 fclose(even);
 fclose(odd);
 return 0;	
}
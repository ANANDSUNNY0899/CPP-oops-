/*strcat(string1,string2) ----string concatenation
This function is used to concatinate the content of
one string to the enfd of the string.The result will
be saved in first string*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char x[30],y[30];
	printf("Enter a string\n");
	gets(x);
	printf("Enter another string\n");
	gets(y);
	strcat(x,y);//x=x+y
	printf("After joining  \n");
	puts(x);
}*/
/*strupr(string) --string upper
this function is used to convert a string from
lower case to upper case*/
/*#include<stdio.h>
#include<string.h>
int main()
{
	char x[30];
	printf("Enter a string\n");
	gets(x);
	strupr(x);
	printf("After after conversion \n");
	puts(x);
}*/


/*strlwr(string)--string lower
This function is used to convert a string from
 upper case to lower case*/
 
/*#include<stdio.h>
#include<string.h>
int main()
{
	char x[30];
	printf("Enter a string\n");
	gets(x);
	strlwr(x);
	printf("After after conversion \n");
	puts(x);
}*/

/*strcmp(string1,string2)--string compare
This function is used to compare the content of the string
with another.
The function gives/returns 0 if both string are equal otherwise
 it will give us non zero value.
 This function is case sensititve*/
 /*#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char x[30],y[30];
 	int cmp;
 	printf("Enter the string x\n");
 	gets(x);
 	printf("Enter the string y\n");
 	gets(y);
 	cmp=strcmp(x,y);
 	if(cmp==0)
 	    printf("String are equal\n");
 	else
	    printf("String are not equal\n");    
 }
*/
/*strcmpi(string1,string2)--string compare
This function is used to compare the content of the string
with another.
The function gives/returns 0 if both string are equal otherwise
 it will give us non zero value 
 This function is not a case sensititve*/
 /*#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char x[30],y[30];
 	int cmp;
 	printf("Enter the string x\n");
 	gets(x);
 	printf("Enter the string y\n");
 	gets(y);
 	cmp=strcmpi(x,y);
 	if(cmp==0)
 	    printf("String are equal\n");
 	else
	    printf("String are not equal\n");    
 }*/
 /*strncmp(string1,string2)--string compare
This function is used to compare the content of the string
with another.
The function gives/returns 0 if both string are equal otherwise
 it will give us non zero value 
 This function is not a case sensititve*/
 /*#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char x[30],y[30];
 	int cmp,n;
 	printf("Enter the string x\n");
 	gets(x);
 	printf("Enter the string y\n");
 	gets(y);
 	printf("Enter how many character you want to compare\n");
 	scanf("%d",&n);
 	cmp=strncmp(x,y,n);
 	if(cmp==0)
 	    printf("String are equal\n");
 	else
	    printf("String are not equal\n");    
 }*/
 
 //program to check wheather the string is palindrome or not not.
/*#include<stdio.h>
#include<string.h>
int main()
{
	char x[30],pal,revs[30];
	printf("Enter the string\n");
	gets(x);
	strcpy(revs,x);
	strrev(x);
	if(strcmpi(x,revs)==0)
	    printf("String is palindrome\n");
	else
	    printf("String is not palindrome\n");
}
*/

/*WAP to inputn 2 strings. If length of both the string is multiple 
of 2 then replace the vowel in first string ny "*" and concatinate with second one.
print the final string .otherwise print the concatenation of both the string*/


/*#include<stdio.h>
#include<string.h>
int main()
{
char x[30],y[30];
int l1,l2,i=0;
printf("Enter string x\n");
gets(x);
printf("Enter string y\n");
gets(y);
l1=strlen(x);
l2=strlen(y);
if(l1%2==0 && l2%2==0)
{
while(x[i]!='\0')
{
if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
(x[i])='*';
i++;
}
strcat(x,y);
puts(x);
}
else
{
strcat(x,y);
puts(x);
}
}
*/

/*Write a program to input 2 string. If both the
strings are palindrome then concatenate them 
otherwise print the length of both the strings.*/
/*#include<stdio.h>
#include<string.h>
int main()
{
	char x[30],y[30];
	int le1,len2;
	printf("Enter the string1\n");
	gets(x);
	printf("Enter the string2\n");
	gets(y);
	le1=len(x);
	len2=len(y);
	strcpy(x,y);
	strrev(x);
	if(strcmpi(x,y)==0)
	printf("strings are palindrome\n");
	strcat(x,y);
	printf("Strings are not palindrome");
	
}*/

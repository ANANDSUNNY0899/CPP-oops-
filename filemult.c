//wap to write a file in a write mode a multipication table of a number onto the file

/*#include<stdio.h>
int main()
{
	FILE *fp;
	int n,i;
	fp=fopen("KOCAB.txt","w");
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
		fprintf(fp,"%d\n",n*i);
	}

	fclose(fp);
 } 
 
 
 //wap to append a content of one file at he end of another file
 
#include<stdio.h>
int main()
{
	FILE*fr,*fa;
	fr = fopen("KOCAB.txt","r");
	fa = append("append.txt","a");
	if (fr==NULL)
	    printf("cannot open file\n");
	else
	{
		while(1)
		
		}    
}


*/
//wap to red a file and copy its contents onto another file
//by converting small leter to capital letters to capital letters
#include<stdio.h>
int main()
{
	FILE *fr,*fw;
	fr = fopen("KOCAB.txt","r");
	fw = fopen("upper.txt","w");
	if(fr==NULL)
	    printf("cannot open file");
	else
	{
		while(1)
		{
			if(ch>='a' && ch<='z')
			    ch=ch-32;
		    fputc(ch,fw);
		}
	  }
	  fclose(fr);
	  flose(fw);  
}

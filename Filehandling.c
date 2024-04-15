/* Program to write the content of n students onto file
student.dat and further read the file student.dat and print those
students who belong to section KOCAB*/
#include<stdio.h>


struct student
{
int roll_no;
char name[30],sec[10];
};
int main()
{
int i,n;
FILE *fw;
struct student s;
fw = fopen("student.dat","w");
printf("Enter the number of students\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the detail of student %d\n",i);
scanf("%d%s%s",&s.roll_no,s.name,s.sec);
fwrite(&s,sizeof(s),1,fw);

}
fclose(fw);
struct student sr;
FILE *fr;
fr = fopen("Student.dat","r");
if (fr == NULL)
printf("File not opened\n");
else
{
for(i=1;i<=n;i++)
{
fread(&sr,sizeof(sr),1,fr);
if(strcmpi(sr.sec,"KOCAB")==0)
printf("%d\t%s\t%s\n",sr.roll_no,sr.name,sr.sec);
}
}
fclose(fr);
}

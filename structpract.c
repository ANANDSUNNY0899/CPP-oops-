#include<stdio.h>
struct student
{
	int roll_no;
	char name[30];
	float marks;
};
int main()
{
	struct student s;
	printf("Enter the detail of a student ");
	scanf("%d%s%f",&s.roll_no,&s.name,&s.marks);
	printf("Detail of student ");
	printf("%d\t%s\t%f ",s.roll_no,s.name,s.marks);


/*#include<stdio.h>
struct employe 
{
	int e_id;
	char name[30];
	char dept[10];
	float salary;
};
int main()
{
	struct employe e;
	printf("Enter the detail of employe ");
	scanf("%d%s%s%f",&e.e_id,&e.name,&e.dept,&e.salary);
	printf("Detail of employe ");
	printf("%d\t%s\t%s\t%f\t ",e.e_id,e.name,e.dept,e.salary);
}


/*

#include<stdio.h>
struct student
{
	int roll_no;
	char name[30];
	float marks[10];
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the detail of student %d " ,i+1);
		scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
	}
	printf("Detail of student are\n ");
	for(i=0;i<=4;i++)
	printf("%d\t%s\t%f\n ",s[i].roll_no,s[i].name,s[i].marks);
}
*/

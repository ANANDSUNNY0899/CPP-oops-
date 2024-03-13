// STRUCTURES IN C
 /*A structure is collection hetrogenous elelments in which all the element are stored 
  in cointinous  memory location but each element will be of different type.
  element of structure also called members of structure .
  the syntax of:-
  
  structure <name>  //user defined data type
  {
  	Member_1;
  	Member_2;
  	 '
  	 '
  	 '
  	 '
  	 '
  	 Member_n;
  	 
  };*/
  
  /*#include<stdio.h>
  struct student
  {
  	int roll_no;
  	char name [30];
  	float marks;
  };
  int main()
  {
  	struct student s;
  	printf("Enter detail of students ");
  	scanf("%d%s%f",&s.roll_no,s.name,&s.marks);
  	printf("Detail of student ");
  	printf("%d\t%s\t%f",s.roll_no,s.name,s.marks);
  }*/
  
  
  //declare a structure employee with member are id ,name department,salary of employee
  
  #include<stdio.h>
  struct employe
  {
  	int id;
  	char name[30];
  	char department[40];
  	float salary;
  };
  int main()
  {
  	printf("Enter the detail of employee\n");
scanf("%d%s%s%f",&e.id,e.name,e.dept,&e.sal);
printf("Detail of employee is \n");
printf("%d\t%s\t%s\t%f",e.id,e.name,e.dept,e.sal);
}
  	
  }

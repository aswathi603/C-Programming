//week 9
//1
#include <stdio.h>
struct student 
{
	int age;
	char first_name[50];
	char *last_name[50];
	int standard;
};
main()
{
	struct student a;
	printf("Enter the age of the student:");
	scanf("%d",&a.age);
	printf("Enter the first name of the student:");
	scanf("%s",a.first_name);
	printf("Enter the last name of the student:");
	scanf("%s",a.last_name);
	printf("Enter the standard of the student:");
	scanf("%d",&a.standard);
	printf("%d %s %s %d",a.age,a.first_name,a.last_name,a.standard);
}

 

#include <stdio.h>
int main()
{ 
int sub1,sub2,sub3,sub4,sub5,total; 
float percentage;
printf("Enter Marks of Subject1 :");
scanf("%d",& sub1);
printf("Enter Marks of Subject2 :");
scanf("%d",& sub2);
printf("Enter Marks of Subject3 :");
scanf("%d",& sub3);
printf("Enter Marks of Subject4 :");
scanf("%d",& sub4);
printf("Enter Marks of Subject5 :");
scanf("%d",& sub5);
total=(sub1+sub2+sub3+sub4+sub5);
printf("Your total marks are:%d\n",total);
percentage=(total)/5.0; 
printf("Your percentage is:%f\n",percentage);
}

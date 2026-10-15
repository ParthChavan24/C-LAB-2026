#include <stdio.h>
int main() 
{
int M,P,C,E,CM; 
printf("Enter The Marks Of Mathematics(Out Of 200):",M);
scanf("%d",&M);
printf("Enter The Marks Of Physics(Out Of 200):",P);
scanf("%d",&P);
printf("Enter The Marks Of Chemistry(Out Of 200):",C);
scanf("%d",&C);
printf("Enter The Marks Of Entrance Examination(Out Of 100):",E);
scanf("%d",&E);
CM=M/2+P/2+C/2+E; 
printf("Your Cut-Off Marks Are:%d\n",CM); 
}

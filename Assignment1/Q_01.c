#include <stdio.h>
int main()
{ 
  int P,T;
  float R,I;
  
  printf("Enter The Principal:",P);
  scanf("%d",&P);
  printf("Enter The Rate(IN Decimal):",R);
  scanf("%f",&R);
  printf("Enter The Time(In Years):",T);
  scanf("%d",&T);
  I=(P*R*T); 
  printf("Your Simple Interest Is:%f",I);
return 0;
}

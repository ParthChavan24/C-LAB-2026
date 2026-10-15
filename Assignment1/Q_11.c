#include <stdio.h> 
int main() 
{ 
long long totalSeconds;
int hours, minutes, seconds; 
printf("Enter total seconds: "); 
scanf("%lld", &totalSeconds); 
hours = totalSeconds / 3600; 
totalSeconds = totalSeconds % 3600; 
minutes = totalSeconds / 60; 
seconds = totalSeconds % 60; 
printf("Time = %d:%d:%d\n", hours, minutes, seconds); 
return 0; 
}

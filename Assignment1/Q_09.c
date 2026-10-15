#include <stdio.h>
int main()
{
    int hours,minutes,seconds;
    long long total_seconds; 
    printf("Enter hours:",hours);
    scanf("%d",&hours);
    printf("Enter Minutes:",minutes);
    scanf("%d",&minutes);
    printf("Enter Seconds:",seconds);
    scanf("%d",&seconds);
    total_seconds=(hours*3600)+(minutes*60)+seconds;
    printf("Time In Seconds Is:%lld\n",total_seconds);
}

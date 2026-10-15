#include <stdio.h>
int main() 
{
    long total_seconds = 31558150; 
    long days, hours, minutes, remaining_seconds; 
    days = total_seconds / 86400;
    remaining_seconds = total_seconds % 86400;
    hours = remaining_seconds / 3600;
    remaining_seconds = remaining_seconds % 3600;
    minutes = remaining_seconds / 60;
    printf("Earth's period of revolution:\n");
    printf("Total seconds   = %ld seconds\n", total_seconds);
    printf("Converted time  = %ld days, %ld hours, %ld minutes\n",
           days, hours, minutes);
}

//PROGRAM TO REPLACE A PARTICULAR CHARACTER WITH ANOTHER CHARACTER IN STRING
#include <stdio.h>
int main(){
    char str[100],original,replace;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to be replaced: ");
    scanf("%c", &original);
    printf("Enter the character to replace with: ");
    scanf(" %c", &replace);
    for(i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]==original){
            str[i]=replace;
        }
    }
    printf("Modified string:");
    puts(str)
    return 0;
}
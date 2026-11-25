//PROGRAM TO CHECK WHETHER A CHARACTER IS PRESENT IN STRING OR NOT. 
#include <stdio.h>
int main(){
    char str[100], ch;
    int i, flag = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to search: ");   
    scanf("%c", &ch);
    for(i = 0; str[i] != '\0'&& str[i] != '\n'; i++){
        if(str[i] == ch){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Character %c found in the string.\n", ch);
    } else {
        printf("Character %c not found in the string.\n", ch);
    }
}
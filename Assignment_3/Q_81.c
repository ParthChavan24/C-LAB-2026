// PROGRAM TO COUNT LOWER AND UPPER CASE LETTERS,DIGITS AND SPECIAL SYMBOLS
#include <stdio.h>
int main(){
   int upr=0,lwr=0,dig=0,spe=0;
   char text[1000];
   printf("Enter the line of text :\n");
   fgets(text, sizeof(text), stdin);
   for(int i=0; text[i]!='\0' && text[i]!='\n'; i++){
    if(text[i]==' '){
            continue;
        }
        else
        if(text[i]<='z' && text[i]>='a'){
            lwr++;
        }
        else if(text[i]<='Z' && text[i]>='A'){
            upr++;
        }
        else if(text[i]<='9' && text[i]>='0'){
            dig++;
        }
        else spe++;
   }
   printf(" There are %d Upper case letter\n There are %d Lower case letter\n There are %d Digits\n There are %d special Characters ",upr,lwr,dig,spe);
} 
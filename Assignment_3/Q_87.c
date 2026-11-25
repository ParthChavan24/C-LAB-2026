#include <stdio.h>
#include <string.h>
int main(){
    char str[100][100];
    char temp[100];
    int n;
    printf("Enter the number of names you want to enter: ");
    scanf("%d", &n);
    printf("Enter the Names:\n");
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(strcmp(str[j], str[j+1])>0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    printf("Names in dictionary order:\n");
    for(int i=0; i<n; i++){
        printf("%s\t", str[i]);
    }
}
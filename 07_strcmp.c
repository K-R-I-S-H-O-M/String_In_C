#include<stdio.h>
#include<string.h>
int main(){
    char   str[50]="Krishom"; 
    char *str2="Basukala";
/*strcmp subtracts the ASCII values of letters . In given example
    the ASCII value of letter "K" is subtracted with ASCII value of letter "B" */
    printf("%d", strcmp(str,str2)); //strcmp returns integer value.

return 0;
}
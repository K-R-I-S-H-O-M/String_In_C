#include<stdio.h>
#include<string.h>
int main(){
    char   str[50]="Krishom"; //It wont put spaces but if we put space it wil add space.
    char str2[50]="basukala";

    printf("%s", strcat(str,str2));
return 0;
}
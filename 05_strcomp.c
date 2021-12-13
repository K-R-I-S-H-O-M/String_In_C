#include<stdio.h>
#include<string.h>
int main(){
    char str1[45]="a";
    char *st2="a";
    int val =strcmp(str1,st2);
    printf("now the val is %d ", val);
return 0;
}
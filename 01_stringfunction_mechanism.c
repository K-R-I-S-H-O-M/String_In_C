#include<stdio.h>
#include<string.h>
int main(){
    char *string1 ="value";// source of value
    char string2[50];// target or place of value

    strcpy(string2,string1);
    printf("value of string 2 becomes '%s'\n",string2);// it copies the value of a string to another string.

    strcat(string2,string1);
    printf("value of string 2 becomes '%s'\n",string2);// it concatenates the two strings.



return 0;
}
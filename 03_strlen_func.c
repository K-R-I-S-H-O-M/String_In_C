#include<stdio.h>
int stringlen(char *length);
int main(){
    char str1[]="Krishom";

    int num = stringlen(str1);
    printf("the length of string is %d",num);
     
    
return 0;
}
int stringlen(char *length)
{
    char *str2 =length;
   
    int i=0;
    while (*str2 !='\0')
    {
        i++;
        str2++;
    }
    return i;
}
  


//  program to create own strlen function
int stlen(char *ptr)
{
    char *st=ptr;
    int len=0;

    while ( *st !='\0')
    {
        st++;
        len++;
       
    }
    return len;
    
}
#include<stdio.h>
int main(){
    char str[]="krishom";
    int n =stlen(str);
    printf("%d", n);
return 0;
}

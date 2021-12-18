#include<stdio.h>
int present(char str[], char c)
{
    char *ptr= str;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return 1;
    
        }
        ptr++;
    }
    
}
int main(){
    char st[100] ="Krishom";
    char ch;
    printf("Enter your favoaurabel words");
    gets(st);
    printf("\n");
    printf("Enter your favarable letter to check");
    scanf("%c",&ch);
   int num = present(st,ch);
   if (num == 1)
   {
       printf("there is presence of the letter");
   }
   else
   {
       printf("there is no presence");
   }
   
   
return 0;
}
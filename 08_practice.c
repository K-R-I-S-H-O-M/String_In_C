#include<stdio.h>
#include<string.h>
int occurence(char st[], char c){
    char *ptr= st;
    int count=0;
    while (*ptr != '\0')
    {
        if (*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main(){
    char st[100];
    char c;
    printf("Enter a string:");
    gets(st);
    printf("Enter the letter you want to check the occurence in the string:");
    scanf("%c",&c);
    int num = occurence(st,c);   
    printf("the occurence of letter %c is %d",c,num);
    
return 0;
}
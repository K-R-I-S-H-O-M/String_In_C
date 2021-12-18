#include<stdio.h>
//Encrypting the string
void encrypt( char *c)
{
    char *ptr =c;
    while ( *ptr != '\0')
    {
        *ptr = *ptr +1;
        ptr++;
    }
    
}
// decrypting the string
void decrypt(char *word)
{
    char *ptr = word;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}

int main(){
    char c[100];
    printf("Enter the words or sentences you want encrypt");
    gets(c);
    encrypt(c);
    printf("the encrypted string is\n ");
    printf("%s\n", c);
    printf("the decrypted string is \n");
    decrypt(c);
    printf("%s\n",c);

return 0;
}
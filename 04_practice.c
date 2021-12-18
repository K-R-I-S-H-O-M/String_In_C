#include<stdio.h>
void slice(char*str, int m , int n){
    int i= 0;
    while ((m+i)<n)
    {
        str[i]= str[i+m];
        i++;
    }
    printf("the final value of i is %d", i);
    str[i]= '\0';
    
}
int main(){
    char st[]= "harrykrsihom";
    slice(st,1,4);
    printf("%s",st);

return 0;
}
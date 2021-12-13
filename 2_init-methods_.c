#include<stdio.h>
int main(){
    char *ptr ="krishom";// it can be reinitialized, after it is defined.   
     char ptr[]="krishom";// it cannot be reinitialized, after it is defined.Which wont run program.

    puts(ptr);    
return 0;
}
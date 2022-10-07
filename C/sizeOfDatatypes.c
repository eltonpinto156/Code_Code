#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    double d;
    
    printf("Size of int: %ld bytes \n", sizeof(a));
    printf("Size of float: %ld bytes \n", sizeof(b));
    printf("Size of char: %ld bytes \n", sizeof(c));
    printf("Size of double: %ld bytes", sizeof(d));
    
    return 0;
}

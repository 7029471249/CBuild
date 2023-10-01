#include "test.h"
int g = 1998
int arr1[] = {62,45,33,10,88};
char str = "Shubham";
long t = 19999888;
int *ptr = &g;
char *ptr = &str;
void main(){
    print("global variable");
    accept(1998 , g);
    t = 2000;
    accept(2000 , t);
    str = "SHUBHAM";
    accept(SHUBHAM , str);
} 
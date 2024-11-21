#include <stdio.h>

int main() {
    int a = 5, b = 10;  //given two variable 
    int c; // take a new variable for swap a and b
    c=a; // take the value of a in c..a is empty now
    a=b; // take the value of b in a..b is empty now
    b=c; //take the value of c in b 
    printf("value of a is :%d\n",a); //print the value of a.
    printf("value of b is :%d",b);  //print the value of b.
    
    return 0;
}

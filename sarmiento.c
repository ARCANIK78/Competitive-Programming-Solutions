#include <stdio.h>
#include <stdlib.h>

int suma4(int a, int b, int c, int d){
    return a+b+c+d;
}
int main(){
    int num1=5,num2=7,num3=2,num4=8, res;
    res = suma4(num1,num2,num3,num4);
    printf("el resultado es : %d", res);
}
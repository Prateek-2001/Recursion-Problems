#include<stdio.h>

int gcd(int a, int b){
    if (a==0){
        return b;
    }
    if (b==0){
        return a;
    }

    if (a==b){
        return a;
    }
    else{
        if (a>b){
            return gcd(a-b, b);
        }
        else{
            return gcd(a, b-a);
        }
    }
}

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("GCD: %d ", gcd(a, b));

    return 0;    
}
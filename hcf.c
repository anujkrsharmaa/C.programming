#include<stdio.h>
int min(int a, int b){
    if(a<b) {
        return a;
    } else {
        return b;
    }
}
int gcd(int a, int b){
    int hcf;
    //for(int i =1; i<=min(a,b); i++){
    for(int i = min(a, b); i >= 1; i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break; // We can break here because we are iterating from min(a, b) downwards
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int hcf = gcd(a , b);
    printf("The HCF/GCD of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
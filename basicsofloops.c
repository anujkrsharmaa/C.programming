#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<n; i++){
        printf("Hello World\n");
    }
    return 0;
}
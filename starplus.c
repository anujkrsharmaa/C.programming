#include<stdio.h>
    int main(){
        int n;
        printf("Enter the number : ");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int a = n/2 + 1; // middle line
                if(i==a || j==a){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        return 0;
    }
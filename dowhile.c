#include<stdio.h>
int main(){
    int i = 1;
    // do{
    //     printf("%d ", i);
    //     i++;
    // }while(i < 101); //condition likhi hoti hai, jab hume jyada cheeze na pata ho
    while (i < 101){ //condition likhi hoti hai, jab hume jyada cheeze na pata ho
        printf("%d ", i); // Print odd numbers
        i++;
    }
    return 0;
}
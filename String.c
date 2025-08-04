#include<stdio.h>
int main(){
    char arr[] = "Anuj Kumar Sharma"; // string initialization
    int i = 0;
    while(arr[i] != '\0') { // loop until the null terminator
        printf("%c ", arr[i]); // prints each character in the string
        i++;
    }
    printf("\n");
    return 0;
}
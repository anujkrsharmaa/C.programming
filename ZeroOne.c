#include<stdio.h>
int main(){
    int arr[3][4] = {{0,1,0,1},{1,0,1,0},{0,1,0,1}};
    int maxcount = 0;
    int maxIdx = -1;
    for(int i = 0; i<3; i++){
        int count = 0;
        for(int j = 0; j<4; j++){
            if(arr[i][j] == 1){
                count++;
            }
            if(count > maxcount){
                maxcount = count;
                maxIdx = i;
            }
        }
        printf("\n");
    }
    printf("Row with maximum number of is row %d with %d ones.\n", maxIdx, maxcount);
    return 0;
}
#include<stdio.h>

int main(){
    int arr[5] = {3,7,2,9,4};
    int i = 0;
    int j = 5 -1; // 4
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int k = 0; k < 5; k++){
        printf("%d ", arr[k]);
    }

    return 0;
}
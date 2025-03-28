#include<stdio.h>

int main(){
    
    int arr[5] = {1,2,3,4,5};
    //printf("%d", arr[0]); ---> 1
    //printf("%d", arr[1]); ---> 2

    // int arr[5];  // array without initialization

    // arr[0] = 10;// to insert value in the 0th index;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // for(int i = 0; i < 5; i++){
    //     printf("Eneter the elemtn %d: ", i);
    //     scanf("%d", &arr[i]);
    // }


    // printing array elements;
    for(int i = 0; i < 5; i++){
        printf("%p\n", &arr[i]);
    }
}
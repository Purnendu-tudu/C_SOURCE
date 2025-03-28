// suppose a got 300, b got 200 , c got 100
// total exam = 500
// avg , total students, lowest , higest

#include<stdio.h>

int main(){
    // assume index as a roll number
    int arr[5] = {200, 400, 100, 60, 150};
    //             0    1    2    3   4
    int total = 0;
    int avg = 0;

    for(int i = 0; i < 5; i++){
        total += arr[i]; // total = total + arr[i];
    }
    avg = (avg +  total) / 5; 
    printf("Total Marks: %d", total);
    printf("Avg: %d", avg);

    return 0;
}
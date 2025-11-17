#include <stdio.h>
void countEvenOdd(int *arr, int n, int *even, int *odd){
    *even = 0;
    *odd = 0;
    for(int i=0; i<n; i++){
        if(*(arr+i) % 2 == 0){
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}
int main(){
    int n, even, odd;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    countEvenOdd(arr, n, &even, &odd);
    printf("So phan tu chan: %d\n", even);
    printf("So phan tu le: %d", odd);
    return 0;
}

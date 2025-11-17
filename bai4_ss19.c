#include <stdio.h>
int countValue(int *arr, int n, int x){
    int count = 0;
    for(int i=0; i<n; i++){
        if(*(arr+i) == x){
            count++;
        }
    }
    return count;
}

int main(){
    int n, x;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    printf("So lan xuat hien cua %d la: %d", x, countValue(arr, n, x));
    return 0;
}

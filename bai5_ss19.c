#include <stdio.h>
int compareArrays(int *a, int *b, int n){
    for(int i=0; i<n; i++){
        if(*(a+i) != *(b+i)){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Nhap mang 1:\n");
    for(int i=0; i<n; i++){
        printf("Phan tu thu %d: ", i+1 );
        scanf("%d", &arr1[i]);
    }
    printf("Nhap mang 2:\n");
    for(int i=0; i<n; i++){
		printf("Phan tu thu %d: ", i+1 );
        scanf("%d", &arr2[i]);
    }
    if(compareArrays(arr1, arr2, n)){
        printf("Hai mang giong nhau");
    } else {
        printf("Hai mang khac nhau");
    }
    return 0;
}

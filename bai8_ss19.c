#include <stdio.h>
#include <math.h>
#define MAX 100 
void scan(int *a, int *n);
void print(int *a, int n);
int prime(int so);
void printfPrime(int *a, int n);
void reverse(int *a, int n);
void increase(int *a, int n);
void decrease(int *a, int n);
void search(int *a, int n);
void printArray(int *a, int n);
int main() {
    int a[MAX]; 
    int n = 0;       
    int choice;
    do {
        printf("\nTHUC DON\n");
        printf("1. Nhap vao phan tu va tung phan tu.\n");
        printf("2. In ra cac phan tu la so chan.\n");
        printf("3. In out cac phan tu la so nguyen to.\n");
        printf("4. Dao nguoc mang.\n");
        printf("5. Sap xep mang (Chon a hoac b).\n");
        printf("a, Tang dan\n");
        printf("b, Giam dan\n");
        printf("8. Nhap mot phan tu va tim kiem phan tu trong mang.\n");
        printf("9. Thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scan(a, &n); 
                break;
            case 2:
                print(a, n);
                break;
            case 3:
                printPrime(a, n);
                break;
            case 4:
                reverse(a, n);
                printArray(a, n);
                break;
            case 5:
                printf("Vui long chon a (Tang dan) hoac b (Giam dan) de sap xep.\n");
                break;
            case 6:
                increase(a, n);
                printArray(a, n);
                break;
            case 7:
                decrease(a, n);
                printArray(a, n);
                break;
            case 8:
                search(a, n);
                break;
            case 9:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 9);
    return 0;
}
void scan(int *a, int *n) {
    printf("Nhap so luong phan tu n (toi da %d): ", MAX);
    scanf("%d", n);
    if (*n <= 0 || *n > MAX) {
        *n = 0;
        printf("So luong phan tu khong hop le. Phai la 1 <= n <= %d.\n", MAX);
        return;
    }
    int *p;
    for (p = a; p < a + *n; p++) {
        printf("a[%ld] = ", p - a); 
        scanf("%d", p);
    }
}
void print(int *a, int n) {
    if (n == 0) { 
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    printf("Cac phan tu chan: ");
    int *p;
    int search = 0;
    for (p = a; p < a + n; p++) {
        if (*p % 2 == 0) {
            printf("%d ", *p);
            search = 1;
        }
    }
    if (!search) {
        printf("Khong co so chan nao.");
    }
    printf("\n");
}
int prime(int number) {
    if (number < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int printPrime(int *a, int n) {
    if (n == 0) {
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    printf("Cac so nguyen to: ");
    int *p;
    int search = 0;
    for (p = a; p < a + n; p++) {
        if (prime(*p)) {
            printf("%d ", *p);
            search = 1;
        }
    }
    if (!search) {
        printf("Khong co so nguyen to nao.");
    }
    printf("\n");
}
void reverse(int *a, int n) {
    if (n == 0) {
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    int *start = a;
    int *end = a + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Da dao nguoc mang.\n");
}
void increase(int *a, int n) {
    if (n == 0) {
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    int *i, *j;
    for (i = a; i < a + n - 1; i++) {
        for (j = i + 1; j < a + n; j++) {
            if (*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
    printf("Da sap xep tang dan.\n");
}
void decrease(int *a, int n) {
    if (n == 0) {
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    int *i, *j;
    for (i = a; i < a + n - 1; i++) {
        for (j = i + 1; j < a + n; j++) {
            if (*i < *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
    printf("Da sap xep giam dan.\n");
}
void search(int *a, int n) {
    if (n == 0) {
        printf("Mang rong. Vui long nhap mang (Chon 1).\n");
        return;
    }
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int *p;
    int search = 0;
    printf("Tim thay %d tai vi tri (chi so): ", x);
    for (p = a; p < a + n; p++) {
        if (*p == x) {
            printf("%ld ", p - a);
            search = 1;
        }
    }
    if (!search) {
        printf("Khong tim thay.");
    }
    printf("\n");
}
void print2
(int *a, int n) {
    if (n == 0) {
        printf("Mang hien tai: [Rong]\n");
        return;
    }
    printf("Mang hien tai: ");
    int *p;
    for (p = a; p < a + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

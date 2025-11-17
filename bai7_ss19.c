#include <stdio.h>
int a[100], n=0;
void scan(){
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf(" Phan tu o vi tri a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void show(){
	int i;	
	printf("Cac phan tu trong mang: ");
	for(i=0;i<n;i++){
		printf (" %d ",a[i]);
	}
	printf("\n");
} 

int lentgh(){
	return n;
}

int total(){
int sum = 0;
int i;
	for(i=0;i<n;i++){
		sum += a[i];
	} 
	return sum;
}

int findMax(){
int max = a[0];
int i;
	for(i=1;i<n;i++){
		if(a[i]> max){
			max = a[i];
		}
	} 
	return max;
}

int main(){
int choice;
do{
	printf("-------------------MENU------------------\n1.Nhap mang\n2.Hien thi mang voi cac gia tri da nhap\n3.Do dai cua mang\n4.Tinh tong cac phan tu trong mang\n5.Tim so lon nhat cua mang\n6.Thoat\nNhap lua chon cua ban: ");
	scanf("%d",&choice);
		switch(choice){
			case 1: scan();
			break;
			case 2: show(); 
			break;
			case 3: printf("Do dai cua mang da nhap: %d\n",lentgh()); 
			break;
			case 4: printf("Tong cac phan tu trong mang: %d\n",total()); 
			break;
			case 5: printf("So lon nhat trong mang la %d\n",findMax()); 
			break;
			case 6: 
				printf ("Da thoat chuong trinh.");
			break;
			default: printf("Lua chon sai! Chi chon tu 1 -> 6!\n");
		}
}
while(choice != 6);
return 0;
}


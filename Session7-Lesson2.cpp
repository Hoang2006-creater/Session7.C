#include<stdio.h>
int main(){
	// Khai bao bien mang
	int a[5];
	// Moi nguoi dung nhap vao 5 phan tu 
    printf("Moi ban nhap 5 phan tu vao mang: ");
    for(int i = 0; i <5;i++){
    	printf("Nhap phan tu thu %d: ", i +1);
    	scanf("%d", &a[i]);
	}
	// In ra mang vua nhap
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
	
	return 0;
}

#include<stdio.h>
int main(){
	// Khai bao mang so nguyen va kich co mang
	int n; 
	printf("Nhap kich thuoc: ");
	scanf("%d",&n); 
	// Nhap gia tri cho tung o trong mang 
	int a[n];
	printf("Nhap Cac phan tu trong mang: ");
	for (int i = 0; i<n;i++){
		scanf("%d",&a[i]); 
	} 
	// In ra mang vua nhap
    printf("Mang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
	
    return 0;
}


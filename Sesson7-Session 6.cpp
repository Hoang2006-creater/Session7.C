#include<stdio.h>
int main(){
	// Khai bao bien mang
	int a[5];
	// Moi nguoi dung nhap vao 5 phan tu 
    printf("Moi ban nhap 5 phan tu vao mang: ");
    for(int i = 0; i <5;i++){
    	printf("Nhap phan tu thu %d: ", i + 1  );
    	scanf("%d", &a[i]);
	}// Thay doi mang
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) { 
            a[i] += 3;
        } else { 
            a[i] += 2;
        }
    }

    // In mang
    printf("Mang moi sau khi thay doi la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

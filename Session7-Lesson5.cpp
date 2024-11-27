#include<stdio.h>
int main(){
	// Khai bao bien mang
	int a[5];
	// Moi nguoi dung nhap vao 5 phan tu 
    printf("Moi ban nhap 5 phan tu vao mang: ");
    for(int i = 0; i <5;i++){
    	printf("Nhap phan tu thu %d: ", i + 1  );
    	scanf("%d", &a[i]);
	}
	 //Gia tri lon nhat va nho nhat
    int max = a[0];
    int min = a[0];

    //Duyet mang
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    // In ket qua 
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}


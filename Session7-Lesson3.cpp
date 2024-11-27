#include<stdio.h>
int main(){
	// Khai bao bien mang
	int a[5];
	// Moi nguoi dung nhap vao 5 phan tu 
    printf("Moi ban nhap 5 phan tu vao mang: ");
    for(int i = 0; i <5;i++){
    	printf("Nhap phan tu thu %d: ", i );
    	scanf("%d", &a[i]);
	}
	
    // Kiem tra
    int co_so_chan = 0;
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            co_so_chan = 1; 
        }
    }

    // Khong co so chan
    if (!co_so_chan) {
        printf("Mang khong chua so chan.\n");
    }

	return 0;
}

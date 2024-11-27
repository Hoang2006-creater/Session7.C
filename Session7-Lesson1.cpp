#include<stdio.h>
int main(){
	// Khai bao va gan gia tri cho mang 
	int a[] = {1, 2, 3, 4, 5};
	// Tinh do dai cua manh
	int do_dai= sizeof(a) / sizeof(a[0]);
	// In ra tung phan tu trong mang
	printf("Cac phan tu trong mang:\n");
	for( int i = 0; i < do_dai; i++){
	
		printf("%d\n", a[i]);
	}
	// In ra do dai mang 
	printf("Do dai cua mang la %d",do_dai);
	
	return 0;
}

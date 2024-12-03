#include<stdio.h>

int main(){
	int n,m;
//  nhap so luong phan tu 1 
    printf("nhap so luong phan tu arr1  (0 < n <= 100): ");
    scanf("%d", &n);
	int arr1[n];
// cac phan tu mang 
    printf("nhap cac phan tu ", n);
    for (int i = 0; i < n; i++) {
        printf("arr1[%d]: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    
//  nhap so luong phan tu 2 
    printf("nhap so luong phan tu arr2  (0 < m <= 100): ");
    scanf("%d", &m);
	int arr2[m];
// cac phan tu mang 
    printf("nhap cac phan tu ", m);
    for (int i = 0; i < m; i++) {
        printf("arr2[%d]: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    
    
//	gop mang 
    int merged[n + m];
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }


    printf("sau khi gop mang : ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
}

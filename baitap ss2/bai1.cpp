#include<stdio.h>

int main(){
	
	int n;

//  nhap so luong phan tu 
    printf("nhap so luong phan tu  (0 < n <= 100): ");
    scanf("%d", &n);
	int arr[n];
// cac phan tu mang 
    printf("nhap cac phan tu :\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
//  tim phan tu lon 
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    printf("phan tu lon nhat la: arr[%d]\n", max);
} 

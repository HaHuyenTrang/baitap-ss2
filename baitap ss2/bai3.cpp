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
//  mang dao nguoc
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

 
    printf("sau khi sao nguoc mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
//    printf("\n");
}

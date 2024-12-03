#include<stdio.h>

int main(){
	int n;
//  nhap so luong phan tu 
    printf("nhap so luong phan tu  (0 < n <= 100): ");
    scanf("%d", &n);
	int arr[n];
// cac phan tu mang 
    printf("nhap cac phan tu ", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
//	thuat toan noi not
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
//                doi vi tri 2 pt
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sau khi sap xep : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

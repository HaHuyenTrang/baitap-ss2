#include<stdio.h>

int main(){
	int n,k;
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
    
//	phan tu can xoa
    printf("phan tu can xoa: ");
    scanf("%d", &k);
    
     for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
      
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
//           giam so luong phan tu
            n--; 
           
        }
    }
    
     printf("mang sau khi xoa %d là:\n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
}

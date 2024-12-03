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
    
//    so can dem 
    int x;
    printf("so can dem: ");
    scanf("%d", &x);

//	dem so lan x xuat hien 
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }


    printf("so %d xuat hien %d lan  ", x, count);
    
    
}

#include <stdio.h>
int main(){
    int arr[100], n, position;
    printf("Nhap so luong phan tu : ");
    scanf("%d", &n);
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can xoa : ", n - 1);
    scanf("%d", &position);

    if(position >= 0 && position < n){
        for (int i = position; i < n - 1; i++){
            arr[i] = arr[i + 1];  
        }
        n--;  
    }

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

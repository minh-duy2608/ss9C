#include <stdio.h>

int main(){
	int a,n,i,sum = 0,num[10];
	while(1){
	printf("\tMENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan li\n");
	printf("3.In ra cac phan tu chan va tinh tong\n");
	printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5.In ra cac phan tu la so nguyen to trong mang tinh tong\n");
	printf("6.Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7.Them 1 phan tu vao vi tri chi dinh\n");
	printf("8.Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d", &a);
	switch(a){
			case 1:
				printf("Nhap so phan tu: ");
				scanf("%d", &n);
				for( i=0; i < n; i++){			
				printf("Nhap gia tri phan tu thu %d: ", i+1);
				scanf("%d", &num[i]);
			}
				break;
			case 2:
				printf("Cac phan tu trong mang: ");
				for(i=0; i<n ; i++){
				printf("%d ", num[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Cac phan tu chan trong mang la: ");
				for(i=0; i<n ; i++){
					if(num[i]%2==0){
					printf("%d ", num[i]);				
					sum += num[i];	
					}
				}
				printf("\nTong cac so chan = %d", sum);
				printf("\n");
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			default:
				break;
				
	}
	
}

}

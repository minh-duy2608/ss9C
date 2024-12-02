#include<stdio.h>

int main(){
	int arr[100];
	int n;
	int index;
	int value;
	
	printf("Moi ban nhap vao so phan tu trong mang:\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Moi ban nhap vao phan tu thu %d cua mang: \n",i+1);
		scanf("%d",&arr[i]);
	}

	
	printf("Moi ban nhap vao vi tri can them:\n");
	scanf("%d",&index);
	printf("Moi ban nhap vao gia tri can them:\n");
	scanf("%d",&value);
	
	if(index>n){
		for(int i=0;i<n;i++){
			arr[i]=arr[i+1];
		}
	}else{
	for(int i=n; i>index; i--){
		arr[i]=arr[i-1];
	}
	
	}
	arr[index]=value;
	n+=1;
	
	printf("Cac phan tu trong mang sau khi thay doi la: \n");
	
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	

}

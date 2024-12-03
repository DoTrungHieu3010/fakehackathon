#include<stdio.h>
int main(){
	int n, choice, size, pos, value, found;
	int arr[n];
	int max;
	do {
		printf("MENU\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra gia tri lon nhat cua mang\n");
		printf("4.In ra cac phan tu la so nguyen to trong mang\n");
		printf("5.Them mot phan tu trong mang\n");
		printf("6.Xoa mot phan tu trong mang\n");
		printf("7.Sap xep mang theo thu tu tang dan\n");
		printf("8.Tim kiem phan tu nguowi dung da nhap va in ra vi tri\n");
		printf("9.Thoat\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
			printf("nhap so phan tu cua mang: "); 
			scanf("%d", &size); 
			for(int i =0; i < size;i++){
				printf("nhap phan tu thu %d: ", i+1);
				scanf("%d", &arr[i]); 
			}
			break;
			case 2:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("\nmang cua ban la: ");
				for (int i = 0; i < size; i++) {
             	   printf("%d ", arr[i]);
            	}
            	printf("\n"); 
            break; 
            case 3:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i =0; i < size; i++){
					if(max < arr[i]){
						max = arr[i]; 
					} 	
				}
				
				printf("gia tri lon nhat la: %d", max);
				break;
			case 4:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				} 
				for(int i = 0; i < size; i++){
					int snt =arr[i];
					int check = 1; 
					if(arr[i] < 2){
						check = 0; 
					}else{
						for(int j =2; j <= snt/2;j++){
							if(snt % j == 0){
								check =0; 
							} 
						}
						if(check){
							printf("%d ", snt);
						}
						
					}
				} 
				break;
			case 5:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
            	if(size >= 100){
					printf("mang da day!"); 
				} else{
					printf("nhap vi tri muon them phan tu: ");
					scanf("%d", &pos);
					printf("nhap phan tu muon them: ");
					scanf("%d", &value);
					if(pos < 1||pos > size +1){
						printf("vi tri khong hop le!"); 
					}else{
						for(int i = size; i >=pos;i--){
							arr[i] = arr[i -1]; 
						} 
						arr[pos - 1] = value;
						size++;	
					}
				}
				break;
			case 6:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("nhap vi tri muon xoa phan tu: ");
				scanf("%d", &pos);
				if(pos < 1||pos > size +1){
					printf("vi tri khong hop le!"); 
				}else{
					for(int i = pos - 1; i <= size;i++){
						arr[i] = arr[i + 1]; 
					} 
					size--; 
					
					printf("mang sau khi da xoa : ");
					for (int i = 0; i < size; i++) {
			            printf("%d ", arr[i]);
			        }
			        printf("\n");
					 
				}
				break; 
			case 7:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i = size; i > 0; i--){
			 		for(int j = 0; j < i;j++){
			 			if(arr[j] > arr[j+1]){
			 				int temp = arr[j];
						 	arr[j] = arr[j+1];
							arr[j+1]=temp; 
						}
					 } 
				 }
				 break;
			case 8:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("nhap vao phan tu can tim: ");
				scanf("%d", &value); 
				for(int i = 0; i < size; i++){
					if(value == arr[i]){
						printf("vi tri cua phan tu %d la: %d\n", value, i+1);
						found = 1; 
					}
				}
				if(found == 0){
					printf("khong tim thay!"); 
				}
				break; 
			case 9: 
				break;
			default:
				printf("Khong hop le\n"); 
		} 
	}
	while(choice!=9);
	return 0;
}

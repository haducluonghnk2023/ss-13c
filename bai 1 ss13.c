#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
		int n;
		char str[n];
		strlen(str);
		int  size=strlen(str);
	
	do{
		
		printf("MENU\n");
		printf("1.nhap vao chuoi ki tu\n");
		printf("2.in ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3.in ra chuoi dao nguoc\n");
		printf("4.in ra so luong chu cai trong chu\n");
		printf("5.in ra so luong chu so trong chuoi\n");
		printf("6.in ra so luong ki tu dac biet trong chuoi\n");
		printf("7.thoat\n");
		printf("lua chon cua ban :\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap vao mot chuoi ki tu\n");
				scanf("%s",&str);
				fflush(stdin);
				break;
			case 2:
				printf("\n%s",str);
				printf("do dai chuoi la %d\n",size);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				exit(0);
					default:
						printf("vui long nhap tu 1-6");
				break;				
		}
	}while(1==1);
}

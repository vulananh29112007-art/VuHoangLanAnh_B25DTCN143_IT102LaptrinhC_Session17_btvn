#include<stdio.h>
#include<string.h> 
#include<ctype.h>
int main(){
	char str1[100],str2[100];
	int flag = 1;
	printf("Nhap chuoi dau tien: ");
	fgets(str1,100,stdin);
	printf("Nhap chuoi thu hai: ");
	fgets(str2,100,stdin);
	int len1 = strlen(str1), len2 = strlen(str2);
	if(len1 != len2){
		printf("Day la 2 chuoi khac nhau");
	}
	for(int i = 0;i<len1;i++){
		if(toupper(str1[i]) != toupper(str2[i])){
		flag = 0;
		break;
    	}
	}
	if(flag == 1){
		printf("Day la 2 chuoi giong nhau");
	}else{
		printf("Day khong phai la 2 chuoi");
	} 


   return 0;
}


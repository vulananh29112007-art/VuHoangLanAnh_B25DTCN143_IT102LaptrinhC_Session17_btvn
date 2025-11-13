#include<stdio.h>
#include<string.h> 
int main(){
	char str1[100],str2[100];
	printf("Moi ban nhap chuoi 1: ");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	printf("Moi ban nhap chuoi 2: ");
	fgets(str2,100,stdin);
	str2[strcspn(str2 , "\n")] = '\0';
	strcat(str1,str2);
	printf("Chuoi sau khi noi: %s ",str1);


   return 0;
}


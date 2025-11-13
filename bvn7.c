
#include <stdio.h>
#include <string.h>
int main (){
	char A[200] , B[100] ;
	int i , j , found = 0 ;
	printf("Nhap chuoi ki tu A :");
	fgets(A , 200 , stdin);
	A[strcspn(A , "\n")] = '\0';
	printf("Nhap chuoi ki tu B :");
	fgets(B , 100 , stdin);
	B[strcspn(B , "\n")] = '\0';
	int lenA = strlen(A) , lenB = strlen(B) ;
	for(i = 0 ; i <= lenA - lenB ; i++){
		for(j = 0 ; j < lenB ; j++){
			if(A[i + j] != B[j]){
				break;
			}
		}
		if(j == lenB){
			found = 1 ;
			break ;
		}
	}
	if(found)
		printf("Co!");
	else 
		printf("Khong!");
		
	return 0 ;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main () {
	char password [100] ;
	int supper = 0 , lower = 0 , digit = 0 , special = 0 ;
	printf("Nhap mat khau can kiem tra :");
	fgets(password , 100 , stdin);
	password[strcspn(password , "\n")] = '\0';
	int len = strlen(password) ;
	if(len < 8){
		printf("Mat khau it nhat co 8 ki tu ! ");
		return 0 ;
	}
	int i ;
	for (i = 0 ; i < len ; i++){
		if(isupper(password[i]))
			supper = 1 ;
		else if(islower(password[i]))
			lower = 1 ;
		else if(isdigit(password[i]))
			digit = 1 ;
		else if(!isalnum(password[i]))
			special = 1 ; 
	}
	if(supper && lower && digit && special)
		printf("Mat khau hop le !");
	else 
		printf("Mat khau khong hop le !");
	
	return 0 ;
}


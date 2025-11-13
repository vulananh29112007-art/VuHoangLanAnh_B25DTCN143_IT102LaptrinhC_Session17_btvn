#include<stdio.h>
#include<string.h> 
int main(){
	char str[100];
	printf("Chuoi ban dau la: ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int len = strlen(str);
	printf("chuoi dao nguoc la: ");
	int i;
	for(i = len - 1;i >= 0;i--){
		printf("%c",str[i]);
	}
	int isPalindrome = 1;
	for(i = 0;i < len / 2;i++){
		if(str[i] != str[len-i-1]){
			isPalindrome = 0;
		}
	}
	if(isPalindrome == 1){
		printf("\nla Palindrome");
	}else{
		printf("\nkhong phai la Palindrome");
	}

   return 0;
}


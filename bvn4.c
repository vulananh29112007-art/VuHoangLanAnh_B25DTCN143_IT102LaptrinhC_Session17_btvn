#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("moi ban nhap chuoi: ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	char deleteValue;
	printf("Moi ban nhap ki tu muon xoa: ");
	scanf("%c",&deleteValue);
	int len = strlen(str),i;
	while ( i < len) {
        if (str[i] == deleteValue) {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--; 
        } else {
            i++; 
        }
    }
    printf("Chuoi sau khi xoa la: %s",str); 


   return 0;
}


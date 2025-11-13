#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char str[100];
    int choice, i;
    printf("Moi ban nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    do {
        printf("\n---------------------------MENU----------------------------\n");
        printf("1. In ra chuoi voi toan bo ki tu duoc chuyen thanh CHU HOA\n");
        printf("2. In ra chuoi voi toan bo ki tu duoc chuyen thanh chu thuong\n");
        printf("3. Thoat chuong trinh\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Chuoi in hoa: ");
                for (i = 0; i < len; i++) {
                    putchar(toupper(str[i])); 
                }
                break;
            case 2:
                printf("Chuoi in thuong: ");
                for (i = 0; i < len; i++) {
                    putchar(tolower(str[i])); 
                }
                break;
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 3);

    return 0;
}


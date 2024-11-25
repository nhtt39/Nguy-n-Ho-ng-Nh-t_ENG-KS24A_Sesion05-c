#include <stdio.h>

int main() {
	//Bai tap 1
	int n;
    for (n = 100; n >= 1; n--) {
        printf("%d\t", n);
    }
    
    //Bai tap 2
    int num = 50;  
    int inNum;
    do {
        printf("\nNhap vao mot so: ");
        scanf("%d", &inNum);
    } while (inNum != num);
    printf("Ban da nhap dung so %d\n", num);
    
    //Bai tap 3
    int m, i, sum = 0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &m);
    if (m <= 0) {
        printf("Vui long nhap mot so nguyen duong\n");
        return 1;
    }
    for (i = 1; i <= m; i++) {
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", m, sum);

	//Bai tap 4
	int x,$i;
	printf("Nhap vao mot so nguyen duong tu 1 den 10\n");
	scanf("%d",&x);
	if (x < 1 || x > 10){
		printf("So nhap vao khong hop le\n");
		return 1;
	}
	printf("Bang cua chuong cua %d la:\n",x);
	for ($i = 1; $i < 10; $i++){
		printf("%d x %d = %d\n",x, $i, x * $i);
	}
	
	//Bai tap 5
	int r, $ii;
	for (r = 1; r <= 9; r++) {
        printf("Bang cuu chuong cua %d la:\n", r);
        for ($ii = 1; $ii <= 10; $ii++) {
            printf("%d x %d = %d\n", r, $ii, r * $ii);
        }
    }
    //Bai tap 6
    int num1, num2, choice;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong %d va %d la: %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu %d va %d la: %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich %d va %d la: %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong %d va %d la: %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 5); 

	//Bai tap 7
	int ii, num3, num4, min, ucln;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num3);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num4);
    if (num3 <= 0 || num4 <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }
    min = (num3 < num4) ? num3 : num4; 
    ucln = 1;  
    for (ii = 1; ii <= min; ii++) {
        if (num3 % ii == 0 && num4 % ii == 0) {
            ucln = ii;
        }
    }
    printf("UCLN cua %d va %d la: %d\n", num3, num4, ucln);
    
    //Bai tap 8
    int iii, num5, num6, min1, ucln1,bcnn;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num5);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num6);
    if (num5 <= 0 || num6 <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }
    min1 = (num5 < num6) ? num5 : num6; 
    ucln1= 1;  
    for (iii = 1; iii <= min1; iii++) {
        if (num5 % iii == 0 && num6 % iii == 0) {
            ucln1 = iii;
        }
    }
    bcnn = (num5 * num6) / ucln1;
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num5, num6, bcnn);
    
    //Bai tap 9
    int num7, num8, num9, choice1;
    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice1);

        switch (choice1) {
            case 1:
                printf("Nhap vao so thu nhat: ");
                scanf("%d", &num7);
                printf("Nhap vao so thu hai: ");
                scanf("%d", &num8);
                printf("Nhap vao so thu ba: ");
                scanf("%d", &num9);
                break;              
            case 2:
                printf("Tong 3 so %d, %d, %d la: %d\n", num7, num8, num9, num7 + num8 + num9);
                break;               
            case 3:
                printf("Trung binh cong cua 3 so %d, %d, %d la: %.2f\n", num7, num8, num9, (float)(num7 + num8 + num9) / 3);
                break;               
            case 4:
                if (num7 <= num8 && num7 <= num9) {
                    printf("So nho nhat la: %d\n", num7);
                } else if (num8 <= num7 && num8 <= num9) {
                    printf("So nho nhat la: %d\n", num8);
                } else {
                    printf("So nho nhat la: %d\n", num9);
                }
                break;            
            case 5:
                if (num7 >= num8 && num7 >= num9) {
                    printf("So lon nhat la: %d\n", num7);
                } else if (num8 >= num7 && num8 >= num9) {
                    printf("So lon nhat la: %d\n", num8);
                } else {
                    printf("So lon nhat la: %d\n", num9);
                }
                break;               
            case 6:
                printf("Thoat chuong trinh.\n");
                break;               
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }

    } while (choice1 != 6);

    return 0;
}

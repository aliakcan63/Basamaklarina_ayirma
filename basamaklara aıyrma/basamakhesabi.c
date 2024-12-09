#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,a,b,c;
	printf("Basamaklarini ogrenmek istediginiz sayiyi giriniz: ");
	scanf("%d",&n);
	
	a=n/100;
	
    b=(n/10)%10;
	
	c=n%10;
	
	printf("Yuzler: %d\n",a);
	printf("Onlar: %d\n",b);
	printf("Birler: %d",c);
	
	return 0;
}

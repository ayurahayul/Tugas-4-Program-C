#include <stdio.h>
#include <stdbool.h>

int main (){

	char nama[20];
	char npm [10];
	float ipk;
	int nilai;
	char kelamin [10];
	bool status= false;
	
	printf("\n");
	printf("Selamat Datang di Program Saya \n");
	printf("============================== \n");
	printf("\n");
	
	printf("Masukan Nama: ");
	scanf("%s", &nama);
	
	printf("Masukan Npm: ");
	scanf("%s", &npm);
	
	printf("Masukan IPK: ");
	scanf("%f", &ipk);
	
	printf("Masukan Nilai: ");
	scanf("%d", &nilai);
	
	printf("P/L: ");
	scanf("%s", &kelamin);
	
	printf("\n");
	printf("Status Pernikahan :");
	scanf("%d", &status);
	
	printf("\n");
	printf("Data diri yang anda inputkan adalah \n");
	printf("\n");
	
	printf("Anda bernama %s\n", nama);
	printf("Dengan npm %s\n", npm);
	printf("Ipk yang anda inginkan adalah %f\n", ipk);
	printf("Nilai anda adalah %d\n", nilai);
	printf("jenis kelamin anda adalah %c\n", kelamin);
	printf("status pernikahan anda adalah %d\n", status);

	
	return 0;
}
	
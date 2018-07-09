

#include <stdio.h>

main()
{
	int x;			//variabel untuk nilai jumlah bintang
	int n;			//variabel bantuan untuk proses loop
	int i;			//variabel bantuan untuk proses loop
	char pilihan;	//vzriabel pilihan untuk mengulangi program
	do
	{
		system("cls");		//untuk membersihkan layar
		printf("\n\n\t\t** Program Menampilkan Deret Bintang Horisontal **");		//judul program
		printf("\n\n > Masukan Jumlah Bintang: "); scanf("%i",&n);					//meng input nilai jumlah bintang
		for(x=1; x<=n;x++)			//pencacah (bagian atas)
		{
			for(i=1;i<=x;i++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(x=n-1; x>=1;x--)		//pencacah bagian bawah)
		{
			for(i=1;i<=x;i++)
			{
				printf("*");
			}
			printf("\n");
		}
		fflush(stdin); 												//membersihkan sisa proses yang sebelumnya
		printf("\n\nUlangi lagi? [Y/N] ");scanf("%s",&pilihan);		//opsi untuk mengulangi program
	}
	while(pilihan=='y');
	if(pilihan=='n');
	{
		printf("\n\n===========================================================");
		printf("\n\t\tTerimakasih Telah Mencoba :)\n");
		printf("===========================================================\n\n");	
	}
}

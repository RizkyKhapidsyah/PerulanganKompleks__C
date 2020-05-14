#include <stdio.h>
#include <conio.h>

inline Jalankan_Contoh2() {
	int i, j;

	puts("\n\n=======================");
	puts("CONTOH 2");
	puts("=======================");

	for (i = 0; i <= 2; i++)
	{
		puts("Awal Dari Counter Loop!");
		printf("Outer Loop Counter: %d\n", i);
		
		for (j = 0; j <= 2; j++)
		{
			printf("Inner Loop Counter: %d\n", j);
		}

		puts("Akhir Dari Outer Loop");
	}

	_getch();
	return 0;
}
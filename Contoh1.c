#include <stdio.h>
#include <conio.h>

inline Jalankan_Contoh1() {
	int i, j;

	puts("=======================");
	puts("CONTOH 1");
	puts("=======================");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("i = %d, j = %d\t", i, j);
		}
	}

	_getch();
	return 0;
}
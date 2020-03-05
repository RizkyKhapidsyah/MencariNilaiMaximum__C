/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	int Tab[10] = { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
	int max;
	
	max = Tab[0];
	
	for (i = 1; i < 10; i++) {
		if (Tab[i] > max) {
			max = Tab[i];
		}
	}

	printf("Nilai Max = %d", max); 

	_getch();
	return 0;
}
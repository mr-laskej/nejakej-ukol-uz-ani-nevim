// nejakej ukol uz ani nevim.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <stdio.h>

int pocet[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int cisla[10];

int main(void)
{
		int znak = 0;
		int cislo = 0;
		FILE* soubor = fopen("cisla.txt", "r");

		if (soubor == NULL) {
			printf("ERROR: SOUBOR NELZE OTEVRIT PRO CTENI\n");
			return 1;
		}

		while (!feof(soubor)) {
			fscanf_s(soubor, "%d", &cisla[znak]);
			znak++;
		}
		for (int i = 0; i < 10; i++) {
			cislo = cisla[i];
			pocet[cislo]++;
		}
		for (int i = 0; i < 10; i++) printf("Cislo %d se objevuje %dx\n", i, pocet[i]);


		if (fclose(soubor) == EOF) {
			printf("ERROR: SOUBOR NELZE ZAVRIT\n");
			return 1;
		}
		return(0);
	}



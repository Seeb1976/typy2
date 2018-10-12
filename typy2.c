#include <stdbool.h>
#include "stdio.h"

	int main () {
	enum dni {
		ni, po=5, wt, sr, cz, pt, so};
	enum dni dzien_tygodnia;
	bool czy_byl_obecny=false;

	dzien_tygodnia=so;
	printf("%i\n", dzien_tygodnia);
	printf("%i\n", czy_byl_obecny);
}


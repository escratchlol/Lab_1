#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Дата рождения");

	getchar();

	puts(" _    _     _   _     _    _ ");
	puts("| |  |_    | |  _|   | |  |_|");
	puts("|_|   _| . |_|  _| . |_|  |_|");

	return 0;
}
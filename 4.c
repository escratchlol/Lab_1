#include <stdio.h>
#include <locale.h>

void name();
void date();
void main()
{
	name();
	date();
}
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Моя программа,");

	getchar();
	puts("***************************************************");
	puts("*                                                 *");
	puts("*     тема: Разработка консольного приложения     *");
	puts("*                                                 *");
	puts("* выполнила: Лысюк Е.В. (группа бИД262-1)         *");
	puts("*                                                 *");
	puts("***************************************************");


}
void date()
{
	puts(" _    _     _   _     _    _ ");
	puts("| |  |_    | |  _|   | |  |_|");
	puts("|_|   _| . |_|  _| . |_|  |_|");

}
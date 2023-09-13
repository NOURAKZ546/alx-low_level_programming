#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters 10 times
*
*/
void print_alphabet_x10(void)
{
int line, letters;
for (line = 0; line <= 9; line++)
{
for (letters = 'a'; letters <= 'z'; letters++)
_putchar(letters);
_putchar('\n');
}
}

#include <stdio.h>
//%p pointer ya da adres yazdır demek
//%d decimal number demek bizim kullandığımız
//%x hexadecimal number olarak yazdır demek
int main()
{
int i=12;
int *iptr=&i;
printf("i nin adresi: %p\n",&i); 
printf("iptr değeri: %p\n",iptr);
printf("i sayısının hexa ya çevirilmiş hali: %x\n",*iptr);
return 0;
}
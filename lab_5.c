#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char *isim;
isim=(char *)malloc(19*sizeof(char));
strcpy(isim,"sabriyegülsüm soylu");
printf("%s",isim);
return 0;

}

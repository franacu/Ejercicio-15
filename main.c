#include <stdio.h>

void uni(char *c1,char *c2)
{
    printf("%s %s",c1,c2);
}

int main()
{
    char cad1[100],cad2[100];
    printf("Ingresar cadena de caracteres 1.:\n");
    gets(cad1);
    printf("Ingresar cadena de caracteres 2.:\n");
    gets(cad2);
    printf("Uniendo cadenas...\n");
    uni(cad1,cad2);
    return 0;
}

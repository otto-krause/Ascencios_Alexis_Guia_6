#include<stdio.h>
#include <stdlib.h>
int main()
{
    char notas;
    printf("ingrese su nota ");
    notas = getchar();
    switch (notas)
    {
        case 'a':
        case 'A':
        puts("Excelente.");
        break;
        case 'b':
		case 'B':  
        puts("Buena.");
        break;
        case 'c':
        case 'C': 
        puts("Regular.");
        break;
        case 'd':
        case 'D': 
        puts("Suficiente.");
        break;
        case 'f':
        case 'F': 
        puts("No Suficiente.");
        break;
       }
return 0;
}


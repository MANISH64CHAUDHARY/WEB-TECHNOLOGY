/*To display Hello World 10 times*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int c;
    c=1;
    do
    {
        printf("Hello World\n");
        c++;
    }   while (c<=10);
    getch();
}
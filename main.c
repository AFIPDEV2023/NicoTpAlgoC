#include <stdio.h>

int str_len(char t[])

{
    int i = 0;
    for(; ;)
    {
        if(t[i]=='\0')
            return i;
        i++;
    }
    return i;


}


int main(void)
{
    int x;
    x = 5;

    int y = 0;
    int a=1, b=2;
	float price = 9.99;
	char c = 'a';

    char s[] ="hola";

    printf("Hello, World!\n");
    int l =str_len(s);
    printf("len of %s = %d \n",s,l);
    printf("x=%d | y=%d | Price =%.2f | texte = %c \n  "  , x,y,price,c);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=6;
    int y=3;
    char c='B';

    printf("x equals the value:%d, y=%d and the symbol is %d\n",x,y,c);

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%c",&c);
    for (int i = 0; i <= 10; i++)
        printf("sup ",i);

    scanf("%d %d%c",&x,&y,&c);

    printf("%d %d %c",x,y,c);

}

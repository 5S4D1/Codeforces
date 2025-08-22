// problem: 546A
// title: Soldier and Bananas

#include <stdio.h>
void main()
{
    int price, money, banana;
    scanf("%d %d %d", &price, &money, &banana);
    for (int i = 1; banana > 0; i++)
    {
        money -= price * i;
        banana--;
    }
    if (money < 0)
        printf("%d", money * -1);
    else
        printf("0");

}
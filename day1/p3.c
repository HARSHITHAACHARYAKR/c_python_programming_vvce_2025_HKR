#include<stdio.h>
void main()
{
   float I,E,i,AI,AE,AII=0,AEE=0;
    printf("Enter the number of interior wall:");
    scanf("%f",&I);
    printf("Enter the number of exterior wall:");
    scanf("%f",&E);
    printf("Enter the area in sq foot of interior wall\n");
    for(i=1;i<=I;i++)
    {scanf("%f",&AI);
    AII=AII+AI;}
    printf("Enter the area in sq foot of exterior wall\n");
    for(i=1;i<=E;i++)
    {scanf("%f",&AI);
    AEE=AEE+AI;}
    printf("Total cost =%f",((18*AII)+(12*AEE)));
}
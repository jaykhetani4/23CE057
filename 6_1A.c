#include<stdio.h>
#include<math.h>
int main()
{
    int Temp,Num,Cube,Remainder,Sum;
    printf("Enter The Number: ");
    scanf("%d",&Num);
    Temp = Num;
    while(Num!=0)
    {
        Remainder = Num%10;
        Cube = pow(Remainder,3);
        Sum += Cube;
        Num/=10;

    }
    if(Sum==Temp)
        {
            printf("The Given Number Is An Armstrong Number.");
        }
        else
        {
            printf("The Given Number Is Not An Armstrong Number.");
        }
    return 0;
}

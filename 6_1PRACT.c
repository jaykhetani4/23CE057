#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter The Number:");
    scanf("%d",&n);
    if(n==0||n==1)
    {
     for(i=2;i<=n;i++)

        if(n%i==0)
        {
            printf("The Given Number Is Not A Prime Number.");
        break;
        }
        else
        {
        printf("The Given Number Is A Prime Number.");
        break;
        }
    }
        return 0;
}

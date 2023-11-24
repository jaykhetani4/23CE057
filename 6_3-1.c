/*This Program Is Prepared By Jay Khetani - 23CE057*/
#include<stdio.h>
int main()
{
    int R,C;
    for(R=1;R<=5;R++)
    {
        for(C=1;C<=R;C++)
        {
            if(C%2==0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    printf("By Jay Khetani - 23CE057\n");
    return 0;
}


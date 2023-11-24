#include<stdio.h>
int main()
{
int sum=21,u,c;
while(sum!=1)
{
  printf("\nChoose the number: ");
  scanf("%d",&u);
  if(u>=1&&u<=4)
  {
    c = 5-u;
    printf(" Computer chooses the number: %d",c);
    sum = sum - (u+c);
    printf("\n Number of matchsticks left: %d",sum);
  }
  else
  {
    printf("\n Enter valid numbers");
    break;
  }
}
if(sum==1)
{
  printf("\n\n Computer wins the game");
}
printf("\n\nBy Jay Khetani - 23CE057\n\n");
return 0;
}

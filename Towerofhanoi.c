#include<stdio.h>
void movering(int,char,char,char);
int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    movering(n,'A','B','C');
    return 0;
}
void movering(int n,char src,char dest,char aux)
{
    printf("value of n is %d\n",n);
    if(n==1)
        printf("for %d Movingx ring from %c to %c using %c\n",n,src,dest,aux);
    else
    {
        movering(n-1,src,aux,dest);
        printf("for %d Moving ring from %c to %c using %c\n",n,src,dest,aux);
        movering(n-1,aux,dest,src);
    }
}

#include <stdio.h>
#include <stdlib.h>

void ChefWars(void)
{

    printf("enter H and P resp. :\n");
    int H=0,P=0;
    scanf("%d %d",&H,&P);
    while (P > 0 && H > 0)
    {
       H-=P;
       P/=2;
    }
    if(H <= 0)
        printf("%d\n",1);
    
    printf("%d\n",0);
    
}
int main()
{
    int T,i;
    printf("enter no of test cases :\n");
    scanf("%d",&T);

    for(i=0;i<T;i++)
        ChefWars();

    return 0;
}

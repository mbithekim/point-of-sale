#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  cost1,cost2,quantity1,quantity2,totalcost,cashpaid,totalcashtopay;
    char item1,item2;
    printf("shopping list\n");
    printf("menu\n");
    printf("1.sugar ksh 50\n");
    printf("2.rice ksh 200\n");
    printf("item 1:");
    scanf("%s",&item1);
    printf("quantity:");
    scanf("%lf",&quantity1);
    printf("cost:");
    scanf("%lf",&cost1);
    printf("item 1 total cost: %.2lf\n",quantity1*cost1);

    printf("item 2:");
    scanf("%s",&item2);
    printf("quantity:");
    scanf("%lf",&quantity2);
    printf("cost:");
    scanf("%lf",&cost2);
    printf("item 2 total cost: %.2lf\n",quantity2*cost2);
    printf("total cost: %.2lf\n",quantity1*cost1+quantity2*cost2);
    printf("enter total cost:");
    scanf("%lf",&totalcost);
    printf("total cash to pay: %.2lf\n",totalcost*0.16+totalcost);
    printf("enter cash paid:");
    scanf("%lf",&cashpaid);
    printf("enter total cash to pay:");
    scanf("%lf",&totalcashtopay);
    printf("change: %.2lf",cashpaid-totalcashtopay);



    return 0;
}

/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
    int a,ge,shi,bai,qian;
    printf("输入四位整数：\n");
    scanf("%d",&a);
    ge=a%10;
    shi=a/10%10;
    bai=a/100%10;
    qian=a/1000%10;
    printf("%d\n",ge+shi+bai+qian);
}
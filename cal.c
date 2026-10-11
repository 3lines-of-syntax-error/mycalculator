#include<stdio.h>

int sum()
{
    int a,b;
    printf("\nenter two nos: ");
    scanf("%d%d",&a,&b);
    return a+b;
}

int sub()
{
    int a,b;
    printf("\nenter two nos: ");
    scanf("%d%d",&a,&b);
    return a-b;
}

int mul()
{
    int a,b;
    printf("\nenter two nos: ");
    scanf("%d%d",&a,&b);
    return a*b;
}

int div()
{
    int a,b;
    printf("\nenter two nos: ");
    scanf("%d%d",&a,&b);
    return a/b;
}

int power()
{
    int a;
    printf("\nenter no: ");
    scanf("%d",&a);
    return a*a;
}

int main()
{
    int v,m;
    do
    {
        printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.power\n6.exit");
        printf("\nenter your choice: ");
        scanf("%d",&v);
        fflush(stdin);
        switch (v)
        {
        case 1:
            m=sum();
            printf("\nresult=%d\n",m);
            break;
        case 2:
            m=sub();
            printf("\nresult=%d\n",m);
            break;
        case 3:
            m=mul();
            printf("\nresult=%d\n",m);
            break;
        case 4:
            m=div();
            printf("\nresult=%d\n",m);
            break;
        case 5:
            m=power();
            printf("\nresult=%d\n",m);
            break;
        }

        } while (v!=6);
    return 0;
}
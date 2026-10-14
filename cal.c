#include<stdio.h>
#include<math.h>


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

int fac()
{
    int a,i,s=1;
    printf("\nenter no: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    return s;
}


float root()
{
    float a;
    printf("\nenter no: ");
    scanf("%.2f",&a);
    return sqrt(a);
}

unsigned long long ncr()
{
    int a,b,i;
    unsigned long long s=1;
    printf("\nenter n and r: ");
    scanf("%d%d",&a,&b);
    if(b>a-b)
    {
        b=a-b;
    }
    for(i=1;i<=b;i++)
    {
        s=s*(a-b+i);
        s=s/i;
    }
    return s;
}

int main()
{
    int v;
    float m;
    unsigned long long k;
    do
    {
        printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.power\n6.factorial\n7.root\n8.ncr\n9.exit");
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
        case 6:
            m=fac();
            printf("\nresult=%d\n",m);
            break;
        case 7:
        m=root();
        printf("\nresult=%f\n",m);
            break;
        case 8:
        k=ncr();
        printf("\nresult=%llu\n",k);
            break;
        

        }

        } while (v!=9);
    return 0;
}
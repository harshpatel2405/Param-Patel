#include <stdio.h>
#include <string.h>

struct Pizza
{
    char name[30];
    float price;
};

void setData(struct Pizza *demo)
{
    printf("Enter Pizza Name : ");
    scanf("%s", (*demo).name);

    printf("Enter Price : ");
    scanf("%f", &demo->price);
}

void getData(struct Pizza demo)
{
    printf("Name : %s\n", demo.name);
    printf("Price : %f\n", demo.price);
}

int main()
{
    // * local 
    struct Pizza p;
    struct Pizza q;
    struct Pizza r;

    // * set the data
    setData(&p);
    setData(&q);
    setData(&r);

    // * get the data
    getData(p);
    getData(q);
    getData(r);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>


#define MAXMODEL 11 //max length for model
#define MAXCOLOR 11 // max length for color
#define MAXNUMBER 8 // max length for number
#define MAXCARS 2 //max cars in matrix


struct the_car
{
    char model[MAXMODEL];
    char color[MAXCOLOR];
    char car_number[MAXNUMBER];
};


int main()
{
    struct the_car a[MAXCARS];
    int counter=0;
    while(counter<MAXCARS)
    {
        printf("Enter model\n");
        scanf("%s", &a[counter].model);
        printf("Enter color\n");
        scanf("%s", &a[counter].color);
        printf("Enter number\n");
        scanf("%s", &a[counter++].car_number);
    }
    if (counter>0)
    {
        printf("Base yours cars\n");
        for(int index=0; index<counter; index++)
        {
            printf("Model %s, color is %s, number is %s\n", a[index].model, a[index].color, a[index].car_number);
        }
    }
    else
    {
        printf("Nothing in base!!!\n");
    }
    return 0;
}
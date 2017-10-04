#include<stdio.h>
#include<string.h>


#define MAXMODEL 11 //max length for model
#define MAXCOLOR 11 // max length for color
#define MAXNUMBER 8 // max length for number
#define MAXCARS 2 //max cars in matrix



union number_t
{
    int num;
    char let[MAXNUMBER];
};

struct the_car_t
{
    char model[MAXMODEL];
    char color[MAXCOLOR];
    union number_t number;
};

void print_struct(struct the_car_t a[MAXCARS], int counter)
{
    for(int index = 0; index < counter; index++)
    {
        printf("Model %s, color is %s, number is %s\n", a[index].model, a[index].color, a[index].number.let);
    }
}

void edit_car(struct the_car_t a[MAXCARS])
{
    int position;
    scanf("%d", &position);
    printf("Enter model\n");
    scanf("%s", &a[position].model);
    printf("Enter color\n");
    scanf("%s", &a[position].color);
    printf("Enter number\n");
    scanf("%s", &a[position].number);
}

void find_number(struct the_car_t a[MAXCARS], int counter)
{
    char number[MAXNUMBER];
    scanf("%s", &number);
    for(int index = 0; index < counter; index++)
    {
        if(strcmp(a[index].number.let, number)==0)
        {
            printf("Model %s, color is %s, number is %s\n", a[index].model, a[index].color, a[index].number.let);
        }
    }
}

int main()
{
    struct the_car_t a[MAXCARS];
    int counter=0;
    while(counter < MAXCARS)
    {
        printf("Enter model\n");
        scanf("%s", &a[counter].model);
        printf("Enter color\n");
        scanf("%s", &a[counter].color);
        printf("Enter number\n");
        scanf("%s", &a[counter++].number);
    }
        printf("Base yours cars:\n");

    print_struct(a, counter);
    edit_car(a);
    find_number(a, counter);
    return 0;
}
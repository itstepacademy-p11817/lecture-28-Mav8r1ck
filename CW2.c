#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>
#include<conio.h>


//typedef enum {
//	INT,
//	CHAR,
//} contained_type_var;


typedef	union Variable_t
	{
		int int_data;
		char char_data[4];
	} message_t;

void print_number(message_t* msg) 
{
		printf("%d\n", msg -> int_data);
}

void print_all_bites(message_t* msg)
{
	for (int i=0; i < 4; i++)
	{
		printf("%hhi ", msg->char_data[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%x ", msg->char_data[i]);
	}
}

void print_one_bite(message_t* msg, int n)
{
		printf("%hhi ", msg->char_data[n]);
}

int main()
{
//	contained_type_var type = ;
	message_t msg;
	msg.int_data = 65636;
	print_number(&msg);
	print_all_bites(&msg);
	printf("Enter number of bite");
	int n = 0;
	scanf_s("%d", &n);
	print_one_bite(&msg, n);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>
#include<conio.h>


typedef	union Variable_t
	{
		int int_data;
		bool bool_data[4];
	} message_t;

void print_number(message_t* msg) 
{
		printf("%d\n", msg -> int_data);
}

void bool_all_bites(message_t* msg)
{
	int zero_bites = 0;
	for (int i=0; i < 4; i++)
	{
		if (msg->bool_data[i] == false)
		{
			zero_bites++;
		}
	}
	printf("%d\n", zero_bites);
}

void bool_one_bite(message_t* msg, int n)
{
	if (msg->bool_data[n]==false)
	{
		printf("Zero bite");
	}
	else
	{
		printf("Non-zero bite");
	}
}

int main()
{
	message_t msg;
	msg.int_data = 65636;
	print_number(&msg);
	bool_all_bites(&msg);
	printf("Enter number of bite\n");
	int n = 0;
	scanf_s("%d", &n);
	bool_one_bite(&msg, n);
	system("pause");
	return 0;
}
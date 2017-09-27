#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>
#include<conio.h>


typedef enum {
	INT,
	UINT,
} contained_type_var;

typedef struct {
	contained_type_var type;
	union Variable_t
	{
		int int_data;
		unsigned int uint_data;
	};
} message_t;

void print_data(message_t* msg) {
	if (msg->type == INT)
	{
		printf("%d\n", msg -> int_data);
	}
	else if (msg->type == UINT)
	{
		printf("%u\n", msg->uint_data);
	}
}

int main()
{
//	contained_type_var type = ;
	message_t msg;
	msg.type = UINT;
	msg.int_data = -200000;
	print_data(&msg);
//	message_t msg;
	msg.type = INT;
	msg.uint_data = 200000;
	print_data(&msg);
	system("pause");
	return 0;
}
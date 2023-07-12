#include "stdio.h"

void send_message(int data)
{
    printf("data is: %d\n",data);
}

int read_from_uart(const char *item_name)
{
    if (strcmp(item_name,"temperature") == 0)
    {
        return 55;
    }
}

int main(void)
{

    int temperature = read_from_uart("temperature");
    if (temperature > 0)
    {
        send_message(temperature);
    }

    return 0;
}

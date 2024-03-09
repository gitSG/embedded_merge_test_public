#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int add(int a, int b)
{
	return a+b;
}

int mult(int a, int b)
{
	return a*b;
}
void app_main(void)
{
    while (true) {
        printf("Hello from app_main!\n");
        sleep(1);
        int result = add(2, 3);
    }
}

#include <stdio.h>


int global_value = 42;

void increase_stack()
{
	int temp_array[1000]; 
	printf("Address of array on the stack: %p\n", (void*)temp_array);
}

int main() {
	int local_var = 1; 

	printf("Approximate top of the stack: %p\n", (void*)&local_var);
	printf("Global variable (Data segment): %p\n", (void*)&global_value);
	printf("Function address (Text segment): %p\n", (void*)increase_stack);

	increase_stack();

	return 0;
}
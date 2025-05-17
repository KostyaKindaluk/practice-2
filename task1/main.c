#include <stdio.h>
#include <time.h>

int main()
{
	time_t current_time;
	size_t time_size = sizeof(current_time);

	printf("The 'time_t' data type occupies %zu byte(s).\n", time_size);

	if (time_size == 4)
	{
		time_t max_time = 0x7FFFFFFF;
		printf("On a 32-bit system, the maximum representable time is: %s", ctime(&max_time));
	}
	else
	{
		printf("On 64-bit systems, the time limit is effectively unreachable.\n");
	}

	return 0;
}
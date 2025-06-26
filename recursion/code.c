#include <stdio.h>
#include <string.h>

long int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return (n); 
	return (fibonacci(n-1) + fibonacci(n - 2));
} 

int is_palindrome(char * str, int left, int right)
{
	if (left >= right)
		return (1);
	if (str[left] != str[right])
		return (0);
	else 
		return (is_palindrome(str, left + 1, right - 1));
}

void tower_of_hanoi(int disks, char source, char target, char spare)
{
	if (disks == 1)
	{
		printf("Move disk 1 from %c to %c\n", source, target);
		return;
	}
	tower_of_hanoi(disks - 1,  source, spare, target);
	printf("Move disk %d from %c to %c\n", disks,  source, target);

	tower_of_hanoi(disks - 1,  spare, target, source);
}

int main(void)
{
	// int i;
	// for (i = 0; i < 45; i++)
	// 	printf("%li  ", fibonacci(i));
	// printf("\n");
	// char *str = "madam";
	// printf("%d\n", is_palindrome(str, 0, strlen(str)-1));

	tower_of_hanoi(5, 'A', 'C', 'B');
	return (0);
}


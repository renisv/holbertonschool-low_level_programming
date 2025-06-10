#include <stdio.h>

int main(void)
{
	/**
	printf("Hello, Holberton School!\n");
	*/

    /**
	int age;
	age = 20;
    printf("I am %d yars old.\n", age);
	*/


    /**
	int age; 
	float height;
	char grade;

	age = 20;
	height = 1.75;
	grade = 'A';

	printf("Age: %d, Height: %f, Grade: %c\n", age, height, grade);

	*/

    /**
	float pi;
	pi = 3.14159;

	printf("%.2f\n", pi);
	*/

    /**
	int x, y, sum, diff;

    x = 7;
    y = 5;
	
	sum = x + y;
	diff = x - y;

	printf("%d + %d = %d\n", x, y, sum); 
	printf("%d - %d = %d\n", x, y, diff); 

	*/

	int x, y, sum, diff, prod, div;

	x = 7;
	y = 5;

	sum = x + y;
	diff = x - y;
	prod = x * y;
	div = x / y;


printf("My first calculator in C\n");
printf("%d + %d = %d\n", x, y, sum); 
printf("%d - %d = %d\n", x, y, diff); 
printf("%d * %d = %d\n", x, y, prod); 
printf("%d / %d = %d\n", x, y, div); 

printf("\nIt is great to be a programmer\n"); 
	return (0);
}
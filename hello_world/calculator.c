#include <stdio.h>
int main(void)
{
/**
*calculator
*1. recieve input
*2. computations (add, sub, mul, div)
*3. display results
*/

int x, y, sum, diff, prod, div;

x = 7;
y = 5;

sum = x + y;
diff = x - y;
prod = x * y;
div = x / y;


printf("My first calculator in C\n");
printf("%d + %d = %d\n", x, y, sum); /*do the same for all*/

return (0);
}

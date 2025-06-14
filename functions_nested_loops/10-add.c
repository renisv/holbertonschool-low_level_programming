#include "main.h"

/**
* add - prints the time table
* @int1: parameter first num
* @int2: parameter second num
* Return: time table
*/

int add(int int1, int int2)
{
    int sum = int1 + int2;  

    if (sum < 0) {         
        _putchar('-');      
        sum = -sum;         
    }

    if (sum <= 9)
        _putchar(sum + '0');  
    else {
        _putchar((sum / 10) + '0');  
        _putchar((sum % 10) + '0');  
    }
    _putchar('\n');
    return (sum);
}

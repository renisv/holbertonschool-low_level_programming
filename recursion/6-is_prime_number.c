#include "main.h"

int is_prime(int n, int i)
{
    if(n < 2)
    {
        return(0);
    }
    
    else if(n % i == 0)
    {
        return(0);
    }
    
    else if(i == n - 1)
    {
        return(1);
    }
    
    else 
    {
        return(is_prime(n, i + 1));
    }

   
}

int is_prime_number(int n)
{
    return(is_prime(n, 2));
}
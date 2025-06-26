#include "main.h"

int _sqrt(int n, int root)
{
    if (root * root == n)
    {
        return(root);
    }
    else if(root * root > n)
    {
        return(-1);
    }
    else 
    {
        return (_sqrt(n, root + 1));
    }
}

int _sqrt_recursion(int n)
{
    return (_sqrt(n, 0));
}
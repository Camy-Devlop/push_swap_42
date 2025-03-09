//#include "../../include/push_swap.h"
#include <stdio.h> 
#include <math.h> 
double ft_exp(double x)
{
    double	result;
    double term;
    int n;

	result = 1.0;
	term = 1.0;
	n = 1;
	if (x < 0) {
        return (1.0 / ft_exp(-x);
    }
    while (term > 1e-15)
	{
        term *= x / n;
        result += term;
        n++;
    }
    return (result);
}

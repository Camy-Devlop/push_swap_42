#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void n_malloc(double **n, int nb)
{
	*n = malloc(nb * sizeof(double));
}
double ft_rand_d(int a)
{
	return (((double)rand() / (double)(RAND_MAX)) * a);
}

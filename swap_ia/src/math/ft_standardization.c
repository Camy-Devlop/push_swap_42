#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double *ft_standardization(double *x,int size, double min,double max)
{
	int		i;
	double	*new_x;

	if ((max - min) == 0)
		return (NULL);
	i = 0;
	new_x = calloc(size,sizeof(double));
	while(i < size)
		new_x[i] = (x[i++] - min) / (max - min);
	return (new_x);
}

void affiche(double *x, int size)
{
	int i = 0;
	if (!x)
		return ;
	while(i< size)
		printf("%f\n",x[i++]);
	printf("\n");
}


#define t 5
int main()
{
	double f[t] ={23.3,1, 10,40, 13};
	affiche(f,t);
	f =  *ft_standardization(f,t, 1,40);
	affiche(f,t);
}

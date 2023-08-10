#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point) 
{																																											
	point->x = 45;
	point->y = 22;
	printf("%d\n",point->x);
	printf("%d\n",point->y);
}

int	main(void)
{
	t_point point; //store everything from t_point(structure) to point
	set_point(&point); //since function is a pointer function, send in the address of point 
	return (0);
}

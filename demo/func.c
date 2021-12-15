#include "stdlib.h"
#include "stdio.h"
#include "func.h"


float get_max_val(float a, float b)
{
	float ret;
	ret = a;
	if (a < b) {
		ret = b;	
	}

	return ret;
}

float get_min_val(float a, float b)
{
	float ret;
	ret = (a+b) - get_max_val(a, b);

	return ret;
}

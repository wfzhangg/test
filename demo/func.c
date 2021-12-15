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

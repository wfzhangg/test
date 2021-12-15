#include "stdlib.h"
#include "stdio.h"
#include "measure.h"


void print_force_unit(int idx)
{
	char buf[10];
	switch(idx){
	case 0:
		sprintf(buf, "kgf");
		break;
	case 1:
		sprintf(buf, "N");
		break;
	case 2:
		sprintf(buf, "lbf");
		break;
	case 3:
		sprintf(buf, "t");
		break;
	default:
		sprintf(buf, "none");
		break;
	}
	
	printf("you select force unit is %s. \n", buf);
}

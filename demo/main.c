#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "unistd.h" //for sleep() 

#include "func.h"
#include "measure.h"



int main(void)
{
	printf("HELLO WORLD! \n");
	printf("测试make命令和Makefile文件. \n");
	float height = 160.19;
	float weiht = 164.1;
	printf("value = %.1f \n", get_max_val(height, weiht));

	
    	struct tm *ptr;
	long long lt;

//	while(1){
		lt = time(NULL);
		int sec = lt%60;
		int min = lt%3600/60;
		int hour= lt%(3600*24)/3600+8;
		printf("The time now is %02u:%02u:%02u    ", hour,min,sec);
		printf("(press 'Ctrl+C' to exit.) \n");
//		sleep(1);//1sec
//	}
	int idx = 0;
//	printf("please input a num to select force unit. \n");
	perror("please input a num to select force unit. \n");
//	scanf("%d", &idx);
	print_force_unit(idx);

//	getchar();

	return 0;
}

#include <stdio.h>
int br(void);
int ic(void);
/*函数声明*/
int main(void)
{
	br();
	/*函数调用*/
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");
	return 0;
}
int br(void){
	printf("Brazil,Russia");
	return 0;
}
int ic(void){
	printf("India,China");
	return 0;
}

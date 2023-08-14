#include <stdio.h>
int main(void)
{
	int toes;
	toes = 10;
	/*定义toes,初始化为10*/
	printf("toes的值为%d.\n", toes);
	int d_toes = 2 * toes;
	printf("两倍toes的值为%d.\n", d_toes);
	printf("toes的平方为%d.\n", toes * toes);
	return 0;
}
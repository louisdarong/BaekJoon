#include<stdio.h>
int main(void)
{
	short num;
	printf("16 bits integer? ");
	scanf("%hd",&num);
	printf("%d ---> %#4hx",num,num);
	
	return 0;
}

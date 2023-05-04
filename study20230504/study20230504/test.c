#include <stdio.h>

struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = {"CÓïÑÔ³ÌÐòÉè¼Æ", 55};//this is books chinese name
	printf("ÊéÃû:%s\n", b1.name);
	printf("¼Û¸ñ:%d\n", b1.price);
	return 0;

}

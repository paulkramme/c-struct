#include<stdio.h>
#include<string.h>

struct person
{
        char sex;
        unsigned int age;
        char forename[256];
        char name[265];
        char address[265];
};


int main(void)
{
	struct person peter;
	strcpy(peter.forename, "peter");
	strcpy(peter.name, "idontknow");
	peter.age = 738;
	peter.sex = 'm';
	return 0;
}

/*

*/
typedef struct Person {
	int age;
	char *name;
};
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	struct Person p;
//	p = malloc(sizeof(Person));
	p.age = N;
	printf("%d\n",p.age);
	scanf("%s",&p.name);

	printf("%d %s",p.age,p.name);

	return 0;
}


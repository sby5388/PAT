/*
½á¹¹Ìå
*/
#include<stdio.h>
struct {
	int amount;
	char *name;
} coins[]= {
	{1,"penny"},
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollor"}
};
int main() {
	int N;
	scanf("%d",&N);
	
	for(int i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if(N==coins[i].amount){
			printf("%s",coins[i].name);
			break;
		}
	}

	return 0;
}


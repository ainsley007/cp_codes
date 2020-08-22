#include<stdio.h>
int main()
{
	long long money;
	scanf("%lld",&money);
	long long number = 0, left;
	//for 100
	left = money % 100;
	number += (money/100);
	money = left;
	//for 20
	left = money % 20;
	number += (money/20);
	money = left;
	//for 10
	left = money % 10;
	number += (money/10);
	money = left;
	//for 5
	left = money % 5;
	number += (money/5);
	money = left;
	//for 1
	number += money;

	printf("%d\n",number);
	return 0;

}
// testing01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int tempf;
	float tempc;
	printf("Enter the temperature in F");
	scanf_s("%d",&tempf);
	tempc = (tempf - 32) * 5 / 9;
	printf("The temp is %f C",tempc);
	return 0;
}


#include <stdio.h>
#include <math.h>
#include <string.h>


float quadratic(float a, float b, float c)
{
	/*
	* Function to Solve Quadratic
	*/
	float ans;
	ans = (-b + sqrtf(b * b - 4 * a * c)) / (2 * a);
	
	return ans;
}

void pwint() {
	printf("OwO");
}

int main() {
	char number[34]; 
	
	printf("Enter a Number: ");
	gets(number);

	printf("%s", number);
	
	return 0;
}
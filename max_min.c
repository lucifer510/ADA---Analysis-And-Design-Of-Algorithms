#include <stdio.h>

int array[100],max,min,number,count=0;
int main(int argc, char const *argv[])
{
	printf("Please enter number of number :");
	scanf("%d", &number); // number of number
	printf("Please enter the elements: ");
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
	}
	max=min=array[0];
	for (int i = 1; i < number; i++)
	{
		if (min>array[i])
		{	
			count++;
			min=array[i];
		}
		if (max<array[i]) 
		{
			count++;
			max=array[i];
		}		
	}
	printf("Min: %d, Max: %d\n, Total Comparison: %d\n", min, max, count);
	
	return 0;
}

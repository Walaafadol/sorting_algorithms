#include "sort.h"
/**
*bubble_sort - program
*Return:0
*@array:parameter
*@size:argument
*/
void bubble_sort(int *array, size_t size)
{
size_t i, k;
int temp;
if (!array || !size)
return;
i = 0;
while (i < size)
{
for (k = 0; k < size - 1; k++)
{
if (array[k] > array[k + 1])
{
temp = array[k];
array[k] = array[k + 1];
array[k + 1] = temp;
print_array(array, size);
}
}
i++;
}
}

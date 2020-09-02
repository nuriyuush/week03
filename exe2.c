//
//  main.c
//  exe2
//
//  Created by НУРИЯ on 9/2/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
// Nuriya Umirbekova exe2
#include <stdio.h>
void bubble_sort(int *array, int n){
    int i, j, swap;
    for(i = 0 ; i < n - 1; i++)
    {
    for(j = 0 ; j < n-i-1; j++)
    {
    if(array[j] > array[j+1])
    {
    swap=array[j];
    array[j]=array[j+1];
    array[j+1]=swap;
    }
    }
    }
    printf("Sorted Array: \n");
    for(i = 0; i < n; i++)
    printf("%d \n", array[i]);

}
int main()
{
int array[100], n, i;
printf("Enter the number of elements \n");
scanf("%d", &n);
printf("Enter %d elements: \n", n);
for(i = 0; i < n; i++)
scanf("%d", &array[i]);
bubble_sort(array, n);
}

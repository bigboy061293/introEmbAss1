/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Basic statistics
 *
 * This program implements basic statistical function
 *                               - Average
 *                               - Median
 *                               - Sort
 *                               - Min
 *                               - Max
 *                               - Mean
 *
 * @author Nguyen Van Hoa Vu
 * @date 20/11/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (10)

void main() {

/*   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90}; */
								
  unsigned char test[SIZE] = { 12, 1, 34,12, 12,22,14,3,45,99};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	printf("The original data set: \n");
	print_array(test,SIZE);
	printf("\n");
	print_statistics(test, SIZE);
	
}
void print_statistics(unsigned char* array, int arrayLength) {
	
	printf("Data set after sorting: \n");
	sort_array(array, arrayLength);
	print_array(array,arrayLength);
	printf("\n");
	printf("Minimum value: %d \n",find_min(array, arrayLength) );
	printf("Maximum value: %d \n",find_max(array, arrayLength) );
	printf("Median value: %d \n",find_median(array, arrayLength) );
	printf("Mean value: %d \n",find_mean(array, arrayLength) );
}

void print_array(unsigned char* array, int arrayLength) {
  unsigned char i = 0;
		while (i < arrayLength) {
             printf("Element %d: %d  \n",i,*array);
			 i++;
			 array++;
			 
		}
	}
int find_mean(unsigned char* array, int arrayLength) {
	unsigned char i = 0;
	unsigned int temp = 0;
	while (i < arrayLength) {
             temp+=*array;
			 array ++;
			 i++;			 
		}
		return (temp / arrayLength);
}
void sort_array( unsigned char* array, int arrayLength) {
	unsigned char i = 0;
	unsigned char j = 0;
		for (i = 0; i < arrayLength - 1; i++)
			for (j = 0; j < arrayLength - i - 1; j ++)
				if (*(array + j) >= *(array + j + 1)) swap (array + j, array + j + 1);
}

int find_min(unsigned char* array, int arrayLength) {return *array;}
int find_max(unsigned char* array, int arrayLength) {return *(array + arrayLength - 1);}
int find_median(unsigned char* array, int arrayLength) {
	if ((arrayLength % 2) == 0) return ( *(array + arrayLength/2) + *(array + (arrayLength-2)/2))/2;
	else return *(array + (arrayLength-1)/2);
}
	
/* Add other Implementation File Code Here */

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
 * File: stats.h
 * Header file
 *
 *
 * Author: Nguyen Van Hoa Vu
 * Date: 20/11/2018
 */

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print out parameters
 *
 * A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return None
 */
void print_statistics(unsigned char* array, int arrayLength);
/**
 * @brief Print out the array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return None
 */
void print_array(unsigned char* array, int arrayLength);
/**
 * @brief Find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return median value
 */
int find_median(unsigned char* array, int arrayLength);
/**
 * @brief Find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return mean value
 */
int find_mean(unsigned char* array, int arrayLength);
/**
 * @brief Find Maximum number
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return max value
 */
int find_maximum(unsigned char* array, int arrayLength);
/**
 * @brief Find Minimum number
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return min value
 */
int find_minimum(unsigned char* array, int arrayLength);
/**
 * @brief Sort the array
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value. )
 *
 * @param unsigned char* array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return The array that has been sorted
 */
void sort_array(unsigned char* array, int arrayLength);
/**
 * @brief Swap 2 elements
 *
 * Swap function using pointer
 *
 * @param unsigned char* xp       : Number 1st
 * @param unsigned char* yp       : Number 2nd
 *
 * @return Non
 */
void swap(unsigned char* xp, unsigned char* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
#endif /* __STATS_H__ */

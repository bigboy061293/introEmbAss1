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
 * @param None
 *
 * @return None
 */
void print_statistics();
/**
 * @brief Print out the array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return None
 */
int print_array(*int array, int arrayLength);
/**
 * @brief Find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return median value
 */
int find_median(*int array, int arrayLength); 
/**
 * @brief Find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return mean value
 */
int find_mean(*int array, int arrayLength);
/**
 * @brief Find Maximum number
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return max value
 */
int find_maximum(*int array, int arrayLength);
/**
 * @brief Find Minimum number
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return min value
 */
int find_minimum(*int array, int arrayLength);
/**
 * @brief Sort the array
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value. )
 *
 * @param *int array       : pointer to data array
 * @param  int arrayLength : numbers of elements
 *
 * @return The array that has been sorted
 */
int sort_array(*int array, int arrayLength);

#endif /* __STATS_H__ */

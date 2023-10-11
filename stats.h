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
 * @file stats.h 
 * @brief This header file includes declarations and documentation
 *
 * In this file we have 7 functions that make statistical operations on a given array
 *
 * @author Saif Mohammed
 * @date 11-Oct-2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

int find_maximum(int size, unsigned char arr[]);
/*
 *@brief Finding the maximum value in a given array
 *
 *This function takes the size and the array as an inputs. It loops over the array and compare
 *each elements with another. Then setting the biggest value as the maximum value of this array.
 * 
 *@param Integer size and usigned char array
 *@return The integer maximum value
 *
 */

int find_minimum(int size, unsigned char arr[]);
/*
 *@brief Finding the minimum value in a given array
 *
 *This function takes the size and the array as an inputs. It loops over the array and compare
 *each elements with another. Then setting the smallest value as the minimum value of this array.
 *
 *@param Integer size and usigned char array
 *@return The integer minimum value
 *
 */

float find_mean(int size, unsigned char arr[]);
/*
 *@brief Finding the mean value in a given array
 *
 *This function takes the size and the array as an inputs. It loops over the array summing all the
 *values of the array. By dividing the sum by the size of the array we get the mean.
 *
 *@param Integer size and usigned char array
 *@return The float mean value
 *  
 */

float find_median(int size, unsigned char arr[]);
/*
 *@brief Finding the median value in a given array
 *
 *This function takes the size and the array as an inputs. It loops over the array,and we we
 *look at the size of the array, if the size  of the array odd we take the middle element,
 *and if it even we take the two middle elements adding them and dividing by 2 and sitting
 *the result as the median.
 *
 *@param Integer size and usigned char array
 *@return The float median value
 */

void print_array(int size, unsigned char arr[]);
/*
 *@brief Printing a given array
 *
 *This function takes the size and the array as an inputs. It loops over the array and print each
 *element by printf() function to display the array on the console.
 *
 *@param Integer size and usigned char array
 *@return Displaying an array
 *  
 */

void sort_array(int size, unsigned char arr[]);
/*
 *@brief Sorting a given array from the biggest to the smallest
 *
 *This function takes the size and the array as an inputs. It has two loops, outer loop to iterate over
 *the array, and inner loop to do the sorting algorithm. I used the bubble sorting technique
 *that compare each element with the one after it, if it bigger then the one before it we swap
 *otherwise we continue the iteration.
 *
 *@param Integer size and usigned char array
 *@return Displaying and sorted array
 *
 */


void print_statistics(int size, unsigned char arr[]);
/*
 *@brief Printing the statistics of a given array
 *
 *This function takes the size and the array as an input. In this function we display all the
 *returning values and results of all the functions that we've made. By initializing variables
 *and calling the functions, and then printing it on the console.
 *
 *@param Integer size and usigned char array
 *@return Displaying the statistics
 *
 */

#endif /* __STATS_H_ */

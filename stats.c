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
 * @brief File to show the statistics of an given array
 *
 *In this programming assignment you will create a simple application that performs statistical analytics on a dataset
 *a simple application that performs statistical analytics on a dataset. We have eight functions "including main()"
 *that perform some statistical operations like finding the maximum, the minimum, the mean, and the median. In addition
 *to function that display the array unsorted and sorted.
 *
 * @author Saif Mohammed
 * @date 11-Oct-2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
   print_statistics(SIZE,test);
   printf("Array: \n");
   print_array(SIZE,test);
   printf("Sorted array: \n")
   sort_array(SIZE,test);

   return 0;

}

/* Add other Implementation File Code Here */
int find_maximum(int size, unsigned char arr[]) {

}

int find_minimum(int size, unsigned char arr[]) {

}

float find_mean(int size, unsigned char arr[]) {

}

float find_median (int size, unsigned char arr[]) {

}
void print_array(int size, unsigned char arr[]){

}
void sort_array(int size, unsigned char arr[]){

}
void print_statistics(int size, unsigned char arr[]){

}


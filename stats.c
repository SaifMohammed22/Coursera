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

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
   print_statistics(SIZE,test);
   printf("Array: \n");
   print_array(SIZE,test);
   printf("Sorted array: \n");
   sort_array(SIZE,test);

   return 0;

}

/* Add other Implementation File Code Here */
int find_maximum(int size, unsigned char arr[]) {

	int max = arr[0];  // Initialize maxim with the first element of the array
	for (int i = 1; i < size; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int find_minimum(int size, unsigned char arr[]) {
	
	int mini = arr[0];
	for (int j = 1; j < size; j++){
		if (arr[j] < mini){
			mini = arr[j];
		}
	}
	return mini;
}

float find_mean(int size, unsigned char arr[]) {

	float sum = 0.0 ;
	for (int k = 0; k < size; k++){
		sum += arr[k]; // Looping over the array to get the sum
	}
	float mean = sum / size; // Dividing the sum by the number of the array values to get the mean 
	return mean;
}

float find_median (int size, unsigned char arr[]) {

	float median;
	if (size % 2 != 0){
		int middle = (size + 1) / 2;
		median = arr[middle - 1]; // If it's odd, then the median is the middle value
	}
	if (size % 2 == 0){
		int middle = size / 2;    
		median = (arr[middle - 1] + arr[middle]) / 2; // If it's even, then the median is the mean of the two middle values
	}
	return median;
}

void print_array(int size, unsigned char arr[]){

	printf("{");
	for(int g = 0; g < size; g++){
		if( g == size - 1){
			printf("%d", arr[g]); // To print the last value in this shape ", 9}"
		}
		else {								
			printf("%d, ", arr[g]); // To print the values in this way {..., ..., ...}
		}			
	}
	printf("}\n");
}

void sort_array(int size, unsigned char arr[]){

	for (int d = 0; d < size; d++) { // Outer loop
		for (int h = 0; h < size - d - 1; h++) { //Iner loop					
			if (arr[h] < arr[h + 1]) {
				int temp = arr[h]; // Storing the arr[h] value in a temparary variable
				arr[h] = arr[h + 1]; // Swaping the values 					
				arr[h + 1] = temp; // Getting back the value in the temparary at a new position 
			}
		}			
	}
	print_array(size, arr); // Printing the sorted array using print_array function
}

void print_statistics(int size, unsigned char arr[]){

	// Printing all the function results
	int maximum = find_maximum(size, arr);
	int minimum = find_minimum(size, arr);
	float mean = find_mean(size, arr);
	float median = find_median(size, arr);
	printf("Maximum value: %d\n", maximum);
	printf("Minimum value: %d\n", minimum);
	printf("Mean value: %.2f\n", mean);
	printf("Median value: %.2f\n", median);
}


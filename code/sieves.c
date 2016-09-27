/*
	sieves.c
	Assignment 3a, Lab 2, IS1500
	By Sofie Borck Janeheim & Niclas Lund
	Fall 2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>	//needed for sqrt-function

#define COLUMNS 6
int columncheck=0;

void print_number(int n){
  //i < n eller i == n?
    if(columncheck % COLUMNS ==0 && columncheck != 0){
      printf("\n");
  	}
  columncheck++;
  printf("%10d ", n);
}

void print_sieves(int n){
	/*
		Pseudocode for this:
		int n > 1
		Let A be an array of ones from 2 to n

		loop for i = 2, 3, 4,... sqrt(n)
			if A[i] == 1
				for j = i^2, i^2 + i, i^2 + 2i... "not exceeding n":
					A[j] = 0

		print all i in A[i] == 1
		*/
	int intArray[n];
	for(int i = 2; i < n; i++){ //start on 2.
		intArray[i] = 1;	//Fill every position with ones
	}

	for (int i = 2; i < sqrt(n); i++){
		if(intArray[i] == 1){
			for(int j = i*i; j < n; j = j + i){
				intArray[j] = 0;
			}
		
		}
	}
	for(int i=0; i < n; i++){
		if(intArray[i]==1){
      			print_number(i);
      	}
	}
}

int main(int argc, char *argv[]){
  if(argc == 2)
    print_sieves(atoi(argv[1]));
  else
    printf("Please state an interger number.\n");
  return 0;
}
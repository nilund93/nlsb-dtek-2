/*
 print-prime.c
 By David Broman.
 Last modified: 2015-09-15
 This file is in the public domain.
*/


#include <stdio.h>
#include <stdlib.h>

#define COLUMNS 6
int columncheck=0;
int primeamount=0;

void print_number(int n){
  //i < n eller i == n?
      printf("%10d ", n);
    if(primeamount % COLUMNS ==0){
      columncheck++;
      printf("\n");
  }
}

int is_prime(int n){
  int flag;
  for(int i=2; i <= n/2; ++i){
    //Om delbart så är det ej ett primtal
    if(n % i == 0){

      flag = 1;
      break;
    }
    else{
      flag = 0;
    }
  }
  //Om flaggad, alltså ett primtal, returnera 1.
  if(flag == 0 && n != 0 && n != 1){
    return 1;
  }
  else{
    return 0;
  }
}
void print_primes(int n){
  // Should print out all prime numbers less than 'n'
  // with the following formatting. Note that
  // the number of columns is stated in the define
  // COLUMNS
  for(int i = 0; i < n; i++){
    if(is_prime(i)==1){
      print_number(i);
      primeamount++;
    }
  }
//   printf("%10d ", 2);
//   printf("%10d ", 3);
//   printf("%10d ", 5);
//   printf("%10d ", 7);
//   printf("%10d ", 11);
//   printf("%10d ", 13);
//   printf("\n");
//   printf("%10d ", 17);
//   printf("%10d ", 19);

//   printf("\n");
}
// 'argc' contains the number of program arguments, and
// 'argv' is an array of char pointers, where each
// char pointer points to a null-terminated string.
int main(int argc, char *argv[]){
  if(argc == 2)
    print_primes(atoi(argv[1]));
  else
    printf("Please state an interger number.\n");
  return 0;
}

 
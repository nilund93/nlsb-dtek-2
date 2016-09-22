/*
 prime.c
 By David Broman.
 Last modified: 2015-09-15
 This file is in the public domain.
*/


#include <stdio.h>

int is_prime(int n){
	//Skriv om denna kod så att det returneras en etta ifall det är ett primtal
	//och en nolla om det inte är det.
	//Använd endast enkla loopar och if-satser
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
	if(flag == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
  printf("%d\n", is_prime(11));  // 11 is a prime.      Should print 1.
  printf("%d\n", is_prime(383)); // 383 is a prime.     Should print 1.
  printf("%d\n", is_prime(987)); // 987 is not a prime. Should print 0.
}

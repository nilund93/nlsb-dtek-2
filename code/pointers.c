


#include <stdio.h>

char* text1 = "This is a string.";
char* text2 = "Yet another thing.";



void printlist(const int* lst){
  printf("ASCII codes and corresponding characters.\n");
  while(*lst != 0){
    printf("0x%03X '%c' ", *lst, (char)*lst);
    lst++;
  }
  printf("\n");
}

void endian_proof(const char* c){
  printf("\nEndian experiment: 0x%02x,0x%02x,0x%02x,0x%02x\n", 
         (int)*c,(int)*(c+1), (int)*(c+2), (int)*(c+3));
  
}

void copycodes(){
  /*
    load text 1
    check if text1 != 0
    store text1 0 positions from list1

    add 1 to text1
    add 4 to list 1

    load counter 0 positions from counteradress
    add 1 to counter
    store counter 0 pos from counteradress
    loop
  */
  for()
}
void work(){
  /*
      push ra
      load adress from text 1 to a0 <- POINTER CHAR
      load adress from list 1 to a1 <- POINTER SOMETHING
      load adress from count to a2  <- POINTER INT

      call copycodes

      load adress from text 2 to a0 <- POINTER CHAR
      load adress from list 2 to a1 <- POINTER SOMETHING
      load adress from count to a2  <- POINTER INT

      call copycodes
      pop ra
  */

}

int main(void){
  work();

  printf("\nlist1: ");
  printlist(list1);
  printf("\nlist2: ");
  printlist(list2);
  printf("\nCount = %d\n", count);

  endian_proof((char*) &count);
}

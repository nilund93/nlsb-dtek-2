


#include <stdio.h>

char* text1 = "This is a string.";
char* text2 = "Yet another thing.";

//Vi ska deklarera variablerna list1, list2 och counter själva.
int count=0;
int *pCount = &count;
int list1[20];
int list2[20];

int copycodes(char* textstr, int* list, int* counter){
  while(*textstr != 0){
    *list = *textstr;
    ++textstr;
    ++list;
    ++*counter;
    }
}
void work(){
  int* listpointer1 = list1;
  int* listpointer2 = list2;
  copycodes(text1, listpointer1, pCount);
  copycodes(text2, listpointer2, pCount);
}

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

int main(void){
  work();

  printf("\nlist1: ");
  printlist(list1);
  printf("\nlist2: ");
  printlist(list2);
  printf("\nCount = %d\n", count);

  endian_proof((char*) &count);
}

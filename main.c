#include "list.h"
int main(int argc, char* argv[]){
  struct Node* list = buildOneTwoThree();
  struct Node dummy;
  dummy.data = 7;
  SortedInsert(&list, &dummy);
  return 0;
}


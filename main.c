#include "list.h"
int main(int argc, char* argv[]){
  struct Node* list = buildOneTwoThree();
  Pop(&list);
  return 0;
}


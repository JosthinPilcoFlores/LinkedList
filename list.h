#define LIST_H
struct Node {
  int data;
  struct Node* next;
};
int length(struct Node* head);
struct Node* buildOneTwoThree();
#endif

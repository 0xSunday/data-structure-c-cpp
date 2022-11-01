#include <iostream>
using namespace std;
struct Node
{
  Node *prev;
  int data;
  struct Node *next;
}*first = NULL;

void creat(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = first->prev=NULL;
  last = first;

  for (int i = 1; i < n; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = last->next;
    t->prev=last;
    last->next = t;
    last = t;
  }
}
void display(struct Node *p)
{
  p=first;
  while (p->next!=0)
  {
    p=p->next;
  }
  
  
  do
  {
    cout << p->data << endl;
    p = p->prev;
  } while (p != first);
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  creat(A, 5);
  display(first);
  return 0;
}
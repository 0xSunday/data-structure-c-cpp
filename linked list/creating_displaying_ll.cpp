#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
} *first = NULL;

void creat(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (int i = 1; i < n; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
void display(struct Node *p)
{
  while (p != 0)
  {
    cout<<p->data<<endl;
    p=p->next;
  }
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  creat(A, 5);
display(first);
  return 0;
}
#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
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
    cout << p->data << endl;
    p = p->next;
  }
}

Node *linear(struct Node *p, int key)
{

  while (p != 0)
  {
    if (key == p->data)
    {
      return p;
    }

    p = p->next;
  }
  return NULL;
}

int main()
{
  int A[] = {1, 2, 4, 5, 6};
  create(A, 5);
  cout << linear(first, 6) << endl;
  display(first);
  return 0;
}
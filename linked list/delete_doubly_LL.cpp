#include <iostream>
using namespace std;
struct Node
{
  Node *prev;
  int data;
  struct Node *next;
} *first = NULL;

void creat(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = first->prev = NULL;
  last = first;

  for (int i = 1; i < n; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = last->next;
    t->prev = last;
    last->next = t;
    last = t;
  }
}
void display(struct Node *p)
{
  p = first;
  // while (p->next != 0)
  // {
  //   p = p->next;
  // }

  do
  {
    cout << p->data << endl;
    p = p->next;
  } while (p != first);
}

void insert(int pos, int val)
{
  Node *p, *t;
  t = new Node;
  p = first;
  if (pos == 0)
  {
    t->data = val;
    t->prev = NULL;
    t->next = first;
    first->prev = t;
    first = t;
  }
  else
  {

    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t->data = val;
    t->next = p->next;
    p->next = t;
    t->prev = p;
    t->next->prev = t;
  }
}
int deleteDoubly(Node *p, int pos)
{
  int val;

  p = first;
  if (pos == 1)
  {
    first = first->next;
    val = p->data;
    if (first)
    {
      first->prev = NULL;
    }
    delete p;
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }

    val = p->data;
    p->prev->next = p->next;
    if (p->next)
    {
      p->next->prev = p->prev;
    }
    delete p;
  }
  return val;
}
int main()
{
  int A[] = {1, 2, 3, 4, 5};
  creat(A, 5);
  

  cout << "deleted value is " << deleteDoubly(first, 2) << endl;
  display(first);
  return 0;
} 
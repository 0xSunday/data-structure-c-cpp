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
    cout << p->data << endl;
    p = p->next;
  }
}

void max(struct Node *p)
{
  int max = INT32_MIN;  // or use p->data

  while (p != 0)
  {
    if (p->data > max)
    {
      max = p->data;
    }

    p = p->next;
  }
  cout << "the greatest element is " << max << endl;
}

int main()
{
  int A[] = {100, 2, 31, 41, 59};
  creat(A, 5);
  max(first);
  display(first);
  return 0;
}
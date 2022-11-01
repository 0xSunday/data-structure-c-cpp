#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
} *first = NULL;

void insert(Node *p, int pos, int val)
{

  if (pos == 0)
  {
    Node *T = new Node;
    T->data = val;
    T->next = first;
    first = T;
  }
  else
  {
    Node *t = new Node;
    t->data = val;
    p = first;
    for (int i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}
void display(Node *p)
{
  p = first;
  while (p != 0)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

void reverse()
{
  Node *p = first;
  Node *q = NULL;
  Node *r = NULL;

  while (p != 0)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}
int main()
{
  insert(first, 0, 1);
  insert(first, 1, 3);
  insert(first, 2, 4);
  insert(first, 3, 5);
  insert(first, 4, 8);
  cout << "before reversing linked list" << endl;
  display(first);
  cout << endl;
  reverse();
  cout << "after reversing linked list" << endl;

  display(first);
  return 0;
}
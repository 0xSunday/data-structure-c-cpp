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

void remove_duplicates()
{
  Node *q = first;
  Node *p = q->next;
  while (p != 0)
  {
    if (p->data != q->data)
    {
      q = p;
      p = p->next;
    }
    else
    {
      q->next = p->next;
      delete p;
      p = q->next;
    }
  }
}

int main()
{
  insert(first, 0, 1);
  insert(first, 1, 3);
  insert(first, 2, 3);
  insert(first, 3, 5);
  insert(first, 4, 5);
  cout << "before removing duplicates" << endl;
  display(first);
  cout << endl;
  remove_duplicates();
  cout << "after deleating duplicates" << endl;
  display(first);
  return 0;
}
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
int deleteLL(int pos)
{
  Node *p, *q;
  int x = -1;
  p = first;
  q = NULL;
  if (pos == 1)

  {
    x = first->data;
    first = first->next;
    delete p;
  }
  else
  {

    for (int i = 0; i < pos - 1; i++)
    {
      q = p;
      p = p->next;
    }
    if (p != 0)
    {
      q->next = p->next;
      x = p->data;
      delete p;
    }
  }
  return x;
}

int main()
{
  insert(first, 0, 1);
  insert(first, 1, 3);
  insert(first, 2, 4);
  insert(first, 3, 5);
  insert(first, 4, 8);

  cout<<"deleted value is "<<deleteLL(3)<<endl;
  display(first);
  return 0;
}
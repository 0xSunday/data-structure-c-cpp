
#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
} *first = NULL, *second = NULL, *third = NULL;

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

void insert2(Node *p, int pos, int val)
{

  if (pos == 0)
  {
    Node *T = new Node;
    T->data = val;
    T->next = second;
    second = T;
  }
  else
  {
    Node *t = new Node;
    t->data = val;
    p = second;
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

  while (p != 0)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

void merge(Node *p, Node *q)
{

  Node *last = NULL;
  if (p->data < q->data)
  {
    third = last = p;
    p = p->next;
    last->next = NULL;
  }
  else
  {
    third = last = q;
    q = q->next;
    last->next = NULL;
  }

  while (p != 0 && q != 0)
  {
    if (p->data < q->data)
    {
      last->next = p;
      last = p;
      p = p->next;
      last->next = NULL;
    }
    else
    {
      last->next = q;
      last = q;
      q = q->next;
      last->next = NULL;
    }
  }

  if (p != 0)
  {
    last->next = p;
  }
  else
  {
    last->next = q;
  }
}

int main()
{
  insert(first, 0, 1);
  insert(first, 1, 3);
  insert(first, 2, 4);
  insert(first, 3, 6);
  insert(first, 4, 9);

  insert2(second, 0, 2);
  insert2(second, 1, 5);
  insert2(second, 2, 7);
  insert2(second, 3, 8);
  insert2(second, 4, 10);

  display(first);

  cout << endl;
  display(second);
  cout << endl;
  cout << endl;
  cout << endl;
  merge(first, second);
  display(third);
  return 0;
}

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

int sorted()
{
  int x = INT16_MIN;
  Node *p=first;
  while (p!=0)
  {
    if (p->data<x)
    {
      return false;
    }
    else{
    x=p->data;
    p=p->next;
    }
  }
  return true;
}

int main()
{
  insert(first, 0, 1);
  insert(first, 1, 2);
  insert(first, 2, 4);
  insert(first, 3, 2);
  insert(first, 4, 8);
  string value =sorted()?"linked list is sorted":"linked list is not sorted";
  cout<<value<<endl;
    
  display(first);
  return 0;
}
#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
} *head = NULL;


void display(struct Node *p)
{
  do
  {
    cout << p->data << endl;
    p = p->next;
  } while (p != head);
}

void insertCircular(Node *p, int pos, int val)
{
  Node *t = new Node;
  int i;
  if (pos == 0)
  {

    t->data = val;
    if (head == NULL)
    {
      head = t;
      t->next = head;
    }
    else
    {

      while (p->next != head)
      {
        p = p->next;
      }
      p->next = t;
      t->next = head;
    }
  }
  else
  {

    for (i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t = new Node;
    t->data = val;

    t->next = head;
    p->next = t;
  }
}

int deleteCircular(Node *p, int pos)
{
  Node *q = NULL;
  int val=-1;
  if (pos == 1)
  {
    p = head;
    while (p->next != head)
    {
      p = p->next;
    }
    val = head->data;
    if (head == p)
    {
      delete head;
      head = NULL;
    }
    else
    {
      p->next = head->next;
      delete head;
      head = p->next;
    }
    
  }
  else
  {
    p = head;
    for (int i = 0; i < pos - 2; i++)
    {
      p = p->next;
    }
    q = p->next;
    p->next = q->next;
    val = q->data;
    delete q;
  }
  return val;
}
int main()
{
  // int A[] = {1, 2, 6, 9, 11};
  // creat(A, 5);

  insertCircular(head, 0, 1);
  insertCircular(head, 1, 2);
  insertCircular(head, 2, 3);
  insertCircular(head, 3, 4);
  insertCircular(head, 4, 5);

  cout << "deleted value is " << deleteCircular(head, 2) << endl;
  // deleteCircular(head, 3);
  display(head);
  return 0;
}
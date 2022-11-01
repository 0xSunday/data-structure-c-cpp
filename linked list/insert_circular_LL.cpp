#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
} *head = NULL;

// void creat(int A[], int n)
// {
//   int i;
//   struct Node *t, *last;
//   head = new Node;
//   head->data = A[0];
//   head->next = head;
//   last = head;

//   for (int i = 1; i < n; i++)
//   {
//     t = new Node;
//     t->data = A[i];
//     t->next = last->next;
//     last->next = t;
//     last = t;
//   }
// }

// we don't need  create function at all we can insert and creat new lined list by useing insert function
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
  Node *t=new Node;
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

    t->next = p->next;
    p->next = t;
  }
}
int main()
{
  // int A[] = {1, 2, 6, 9, 11};
  // creat(A, 5);

  insertCircular(head, 0, 1); 
  insertCircular(head, 1, 2);
  insertCircular(head, 2, 3);
  insertCircular(head, 3, 6);
  insertCircular(head, 4, 7);
  

  display(head);
  return 0;
}
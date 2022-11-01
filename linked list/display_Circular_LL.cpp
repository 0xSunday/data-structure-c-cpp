#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
} *head = NULL;

void creat(int A[], int n)
{
  int i;
  struct Node *t, *last;
  head = new Node;
  head->data = A[0];
  head->next = head;
  last = head;

  for (int i = 1; i < n; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = head;
    last->next = t;
    last = t;
  }
}
void display(struct Node *p)
{
  do
  {
    cout << p->data << endl;
    p = p->next;
  } while (p != head);
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  creat(A, 5);
  display(head);
  return 0;
}
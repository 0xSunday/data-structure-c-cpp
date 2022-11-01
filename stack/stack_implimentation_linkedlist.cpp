#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
} *top = NULL;

void push(int val)
{
  Node *t = new Node;
  if (t == NULL)
  {
    cout << "stack overflow" << endl;
  }
  else
  {
    t->data = val;
    t->next = top;
    top = t;
  }
}
int pop()
{
  int val = -1;
  Node *p = top;
  if (top == NULL)
  {
    cout << "stack is empty" << endl;
  }
  else
  {
    top = top->next;
    val = p->data;
    delete p;
  }
}
void displayStack()
{
  Node *p = top;
  while (p != NULL)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

int main()
{
  push(10);
  push(20);
  push(30);
  displayStack();
  cout << endl;
  pop();
  displayStack();
  return 0;
}
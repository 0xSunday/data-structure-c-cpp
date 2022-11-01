#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *first = NULL, *rear = NULL;

void enqueue(int val)
{

  struct Node *t;
  t = (struct Node *)malloc(sizeof(struct Node));

  if (t == NULL) // queue is not created means heap memory is full
  {
    printf("queue is full");
  }
  else
  {
    t->data = val;
    t->next = NULL;
    if (first == NULL)
    {
      first = rear = t;
    }
    else
    {
      rear->next = t;
      rear = t;
    }
  }
}

int dequeue()
{
  int x = -1;
  struct Node *t;
  if (first == NULL)
  {
    printf("queue is empty\n");
  }
  else
  {
    int x = first->data;
    t = first;
    first = first->next;
    free(t);
  }
  return x;
}

void display()
{
  struct Node *p;
  p = first;
  while (p)
  {
    printf("%d\n", p->data);
    p = p->next;
  }
}
int main()
{
  enqueue(12);
  enqueue(43);
  enqueue(16);
  enqueue(53);
  enqueue(81);
  int x = dequeue();
  display();
  printf("deleted value is %d", x);

  return 0;
}
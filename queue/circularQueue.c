#include <stdio.h>
#include <stdlib.h>
struct queue
{
  int size;
  int front;
  int rear;
  int *Q;
};

void create(struct queue *q, int size)
{
  q->size = size;
  q->front = q->rear = 0;
  q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct queue *q, int x)
{
  if ((q->rear + 1) % q->size == q->front)
  {
    printf("queue is full\n");
  }
  else
  {
    q->rear = (q->rear + 1) % q->size;
    q->Q[q->rear] = x;
  }
}

void dequeue(struct queue *q)
{
  int x = -1;
  if (q->front == q->rear)
  {
    printf("queue is empty\n");
  }
  else
  {
    q->front = (q->front + 1) % q->size;
    x = q->Q[q->front];

    printf("deleted value is %d\n", x);
  }
}
void displayQueue(struct queue q)
{
  int i = q.front + 1;
  do
  {
    printf("%d\n", q.Q[i]);
    i = (i + 1) % q.size;
  } while (i != (q.rear + 1) % q.size);
}
int main()
{
  struct queue q;
  create(&q, 5);
  enqueue(&q, 12);
  enqueue(&q, 11);
  enqueue(&q, 15);
  enqueue(&q, 17);
  // enqueue(&q, 17);
 
  dequeue(&q);

  displayQueue(q);

  return 0;
}

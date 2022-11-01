#include <iostream>
using namespace std;

struct Queue
{
  int size;
  int front;
  int rear;
  int *Q;
};

void creat(Queue *q, int size)
{
  q->size = size;
  q->front = q->rear = -1;
  q->Q = new int[q->size];
}

void enqueue(Queue *q, int val)
{
  if (q->rear == q->size - 1)
  {
    cout << "queue is full" << endl;
  }
  else
  {
    q->rear++;
    q->Q[q->rear] = val;
  }
}
int dequeue(Queue *q)
{
  int val = -1;
  if (q->front == q->rear)
  {
    cout << "queue is empty" << endl;
  }
  else
  {
    q->front++;
    val = q->Q[q->front];
  }
  return val;
}
void displayQueue(Queue q)
{

  for (int i = q.front + 1; i <= q.rear; i++)
  {
    cout << q.Q[i] << endl;
  }
}
int main()
{
  Queue q;
  // cout << "Enter the size" << endl;
  // cin >> q.size;
  // q.Q = new int[q.size];
  creat(&q, 5);
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  enqueue(&q, 30);
  enqueue(&q, 30);
  enqueue(&q, 30);
  enqueue(&q, 30);
  dequeue(&q);
  displayQueue(q);

  // for (int i = 0; i < q.size; i++)
  // {cout<<"enter the element number "<<i+1<<" : ";
  //   cin >> q.Q[i];
  // }
  // cout << endl;
  // for (int i = 0; i < q.size; i++)
  // {
  //   cout << q.Q[i] << endl;
  // }

  return 0;
}
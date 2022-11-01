// #include <iostream>
// using namespace std;
// struct Node
// {
//   int data;
//   struct Node *next;
// } *first = NULL;

// // void creat(int A[], int n)
// // {
// //   int i;
// //   struct Node *t, *last;
// //   first = new Node;
// //   first->data = A[0];
// //   first->next = NULL;
// //   last = first;

// //   for (int i = 1; i < n; i++)
// //   {
// //     t = new Node;
// //     t->data = A[i];
// //     t->next = NULL;
// //     last->next = t;
// //     last = t;
// //   }
// // }
// void display(struct Node *p)
// {
//   while (p != 0)
//   {
//     cout << p->data << endl;
//     p = p->next;
//   }
// }

// void insert(Node *p, int pos, int value)
// {

//   if (pos == 0)
//   {
//     Node *T = new Node;
//     T->data = value;
//     T->next = first;
//     first = T;
//   }
//   else
//   {
//     Node *t = new Node;

//     t->data = value;
//     p = first;
//     for (int i = 0; i < pos - 1 && p ; i++)
//     {
//       p = p->next;
//     }
//     t->next=p->next;
//     p->next=t;
//   }
// }
// int main()
// {

//   // creat(A, 5);

//   insert(first, 0, 90);
//   insert(first, 1, 900);
//   insert(first, 2, 49);
//   display(first);
//   return 0;
// }

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

int main()
{
  insert(first, 0, 1);
  insert(first, 1, 3);
  insert(first, 2, 4);
  insert(first, 3, 5);
  insert(first, 4, 8);

  display(first);
  return 0;
}
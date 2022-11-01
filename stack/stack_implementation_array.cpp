#include <iostream>
using namespace std;
struct stack
{
  int size;
  int top;
  int *s;
};

int create(struct stack *st)
{
  // cout << "enter size of struct stack" << endl;
  // cin >> st->size;

  st->top = -1;
  st->s = new int[5];
}
void display(struct stack st)
{
  for (int i = st.top; i >= 0; i++)
  {
    cout << st.s[i] << endl;
  }
}

void push(struct stack *st, int val)
{
  if (st->top == st->size - 1)
  {
    cout << "struct stack overflow" << endl;
  }
  else
  {
    st->top++;
    st->s[st->top]=val;
  }
}
int pop(struct stack *st)
{
  int x;
  if (st->top == -1)
  {
    cout << "struct stack is underflow" << endl;
  }
  else
  {
    x = st->s[st->top];
    st->top--;
  }
  return x;
}
int peak(struct stack st, int pos)
{
  int x = -1;
  if (st.top - pos + 1 < 0)
  {
    cout << "invalid position";
  }
  else
  {
    x = st.s[st.top - pos + 1];
  }
  return x;
}
int stackTop(struct stack st)
{

  if (st.top == -1)
  {
    return -1;
  }
  else
  {
    return st.s[st.top];
  }
}

int empty(struct stack st)
{
  if (st.top == -1)
  {
    return 1;
  }
  else
    return -1;
}
int full(struct stack st)
{
  if (st.top == st.size - 1)
  {
    cout << "struct stack is full";
    return 1;
  }
  else
    return 0; 
}
int main()
{
  struct stack st;
  create(&st);

  push(&st, 1);
  push(&st, 2);
  push(&st, 3);

  display(st);
  return 0;
}
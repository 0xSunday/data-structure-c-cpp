#include <stdio.h>
#include <malloc.h>

struct Node
{
  struct Node *lchild;
  int data;
  struct Node *rchild;

} *root = NULL;

void insert(int val)
{
  struct Node *t = root;
  struct Node *r, *p;

  if (root == NULL)
  {
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = val;
    p->lchild = p->rchild = NULL;
    root = p;
  }
  else
  {
    while (t != NULL)
    {
      r = t;
      if (t->data == val)
      {
        printf("you enterd %d more then one times\n", val);
        return;
      }
      else if (val < t->data)
      {
        t = t->lchild;
      }
      else
      {
        t = t->rchild;
      }
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = val;
    p->lchild = p->rchild = NULL;
    if (val < r->data)
    {
      r->lchild = p;
    }
    else
    {
      r->rchild = p;
    }
  }
}
void inorder(struct Node *p)
{
  if (p)
  {
    inorder(p->lchild);
    printf("%d ", p->data);
    inorder(p->rchild);
  }
}

struct Node *Search(int val)
{
  struct Node *t = root;

  while (t != NULL)
  {
    if (t->data == val)
    {
      return t;
    }
    else if (val < t->data)
    {
      t = t->lchild;
    }
    else
    {
      t = t->rchild;
    }
  }
  return NULL;
}

int main()
{
  struct Node *temp;
  insert(9);
  insert(15);
  insert(5);
  insert(20);
  insert(16);
  insert(16);

  inorder(root);
  printf("\n");
  temp = Search(200);
  if (temp != NULL)
  {
    printf("the element %d is not found\n", temp->data);
  }
  else
  {
    printf("element is not found");
  }

  return 0;
}
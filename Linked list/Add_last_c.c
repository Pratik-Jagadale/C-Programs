
////////////////////////////////////////////////////
//
//   Insert Last Linked List.........
//
///////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
struct Node
{
    int Data;
    int Next;
};
void insert(int no,struct Node **first)
{
    struct Node *newn;
    newn = (struct Node*)malloc(sizeof(struct Node));

    newn->Data = no;
    newn->Next = NULL;

    if(*first==NULL)
    {
        *first = newn;
    }
    else
    {
        newn->Next = *first;
        *first = newn;
    }
    return;
}
int insert_last(int no,struct Node **first)
{
    struct Node *newn;
    newn = (struct Node*)malloc(sizeof(struct Node));

    newn->Data = no;
    newn->Next = NULL;

    if (first == NULL)
    {
      *first = newn;
    }
    else
    {
      struct Node *temp = *first;
      while(temp->Next == NULL)
      {
          temp->Next = newn;
          temp = temp->Next;
      }
    }
    return;
}
void display(struct Node *first)
{
    if (NULL==first)
    {
        printf("linked List already Empty");
    }
    else
    {
        while(NULL != first)
        {
          printf(" |%d| \n",first->Data);
          first =first->Next;
        }
    }
}
int main()
{
    struct Node *head = NULL;

    //insert(101,&head);
   // insert(105,&head);
    //insert(109,&head);
    insert_last(120,&head);
    display(head);
}


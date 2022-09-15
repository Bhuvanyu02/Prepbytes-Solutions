#include <bits/stdc++.h>
using namespace std;
class SinglyLinkedListNode
{
public:
int data;
SinglyLinkedListNode *next;
SinglyLinkedListNode(int node_data)
{
    this->data = node_data;
    this->next = nullptr;
}
};
class SinglyLinkedList
{
public:
SinglyLinkedListNode *head;
SinglyLinkedListNode *tail;
SinglyLinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}
void insert_node(int node_data)
{
    SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

    if (!this->head)
    {
        this->head = node;
    }
    else
    {
        this->tail->next = node;
    }

    this->tail = node;
}
};
void free_singly_linked_list(SinglyLinkedListNode *node)
{
while (node)
{
    SinglyLinkedListNode *temp = node;
    node = node->next;
    free(temp);
}
}

// Complete the printMidElement function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

void printMidElement(SinglyLinkedListNode *head)
{
  int c=0;
  struct SinglyLinkedListNode * ptr=head;
  while(ptr!=NULL){
    c++;
    ptr=ptr->next;
  }
    c=(c/2)+1;
  ptr=head;
  for(int i=1;i<c;i++){
    ptr=ptr->next;
  }
  cout<<ptr->data<<endl;
}


int main()
{
int test_cases;
cin >> test_cases;
while (test_cases--)
{
SinglyLinkedList *llist = new SinglyLinkedList();
int llist_count;
cin >> llist_count;
for (int i = 0; i < llist_count; i++)
{
    int llist_item;
    cin >> llist_item;
    llist->insert_node(llist_item);
}
printMidElement(llist->head);
free_singly_linked_list(llist->head);
}
return 0;
}

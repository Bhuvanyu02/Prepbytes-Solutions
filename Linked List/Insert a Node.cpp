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
void printLinkedList(SinglyLinkedListNode *head)
{
SinglyLinkedListNode *temp = head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}
void free_singly_linked_list(SinglyLinkedListNode *node)
{
while (node)
{
    SinglyLinkedListNode *temp = node;
    node = node->next;

    free(temp);
}
}


SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head,int value)
{
  
  SinglyLinkedListNode *ptr = head;
  
  while( ptr->next != NULL && ptr->next->data < value ){
    
    ptr = ptr->next;
    
  }
  
  
  
  if(value < ptr->data){
      
   SinglyLinkedListNode *temp = new SinglyLinkedListNode(value);
   
   temp->next= ptr;
   head= temp;
   
}


else{
  
   SinglyLinkedListNode *nextPtr = ptr->next;
  
   SinglyLinkedListNode *temp = new SinglyLinkedListNode(value);
   
   ptr->next= temp;
   temp->next = nextPtr;
   
}
  
  
   
   
   return head;
   
  
  
  
    
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
int value;
cin>>value;
llist->head=insertSortedNode(llist->head,value);
printLinkedList(llist->head);
free_singly_linked_list(llist->head);
}
return 0;
}

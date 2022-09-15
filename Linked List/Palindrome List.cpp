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

// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
  SinglyLinkedListNode *ptr=head;
  int c=0;
  while(ptr!=NULL){
    c++;
    ptr=ptr->next;
  }
  int arr[c];
  ptr=head;
  for(int i=0;i<c;i++){
    arr[i]=ptr->data;
    ptr=ptr->next;
  }
  int i=0;
  int j=c-1;
  int check=0; 
  while(j>i){
    if(arr[i]!=arr[j]){
        check=1;
        break;
    }
    i++;
    j--;
  }
  if(check==0){
   return true;
  }
  else{
    return false;
  }

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
bool res= palindromeLlist(llist->head);
if(res)
cout<<"true"<<endl;
else
{
    cout<<"false"<<endl;
}
free_singly_linked_list(llist->head);
}
return 0;
}

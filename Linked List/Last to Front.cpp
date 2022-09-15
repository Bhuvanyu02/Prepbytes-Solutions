SinglyLinkedListNode *lastElementFirst(SinglyLinkedListNode *head)
{
   SinglyLinkedListNode *ptr=head;
   SinglyLinkedListNode *ptr2=ptr->next;
   
   if(ptr2==NULL){
     return ptr;
   }
  
  while(ptr2->next!=NULL){
      ptr=ptr->next;
      ptr2=ptr2->next;
  }
  ptr2->next=head;
  head=ptr2;
  ptr->next=NULL;
  
  return head;
  
}



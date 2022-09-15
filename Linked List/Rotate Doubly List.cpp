SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head,int k)
{
  int c=1;
  
  SinglyLinkedListNode *ptr = head;
  SinglyLinkedListNode *tail = head;
  
  
  while(tail->next != NULL){
    
    if(c < k){
      
      ptr = ptr->next;
      c++;
    }
    
    
    tail = tail ->next;
    
  }

  
  tail->next = head;
  head->prev = tail;
  
  
  head = ptr->next;
  
  ptr->next = NULL;
  head->prev = NULL;
  
  return head;
  
    
}

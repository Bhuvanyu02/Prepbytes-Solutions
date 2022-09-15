
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



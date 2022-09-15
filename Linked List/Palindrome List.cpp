
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


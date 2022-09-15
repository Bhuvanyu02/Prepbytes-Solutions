
SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head)
{

      SinglyLinkedListNode *ptr=head;
      int c=0;
      while(ptr!=NULL){
        c++;
        ptr=ptr->next;
      }
      char arr1[c];
      char arr2[c];
      ptr=head;
      int i1=0;
      int i2=0;
      while(ptr!=NULL){
        if(ptr->data=='a'||ptr->data=='e'||ptr->data=='i'||ptr->data=='o'||ptr->data=='u'){
              arr1[i1]=ptr->data;
              i1++;
        }
        else{
          arr2[i2]=ptr->data;
          i2++;
        }
        ptr=ptr->next;
      }
      ptr=head;
      for(int i=0;i<i1;i++){
        ptr->data=arr1[i];
        ptr=ptr->next;
      }
      for(int i=0;i<i2;i++){
        ptr->data=arr2[i];
        ptr=ptr->next;
      }
      return head;
        
}




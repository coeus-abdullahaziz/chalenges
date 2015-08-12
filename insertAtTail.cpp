Node* Insert(Node *head,int data)
{
  if (!head)
  {
      Node * p = new Node();
      p->data = data;
      p->next=NULL;
      head=p;
   
  }
  else
  {
      Node * q = head;
      while(q->next != NULL)
      {
          q= q->next;
      }
      Node * p = new Node();
      p->data = data;
      q->next = p;
     
  }
      return head; 
}


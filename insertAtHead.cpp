Node* Insert(Node *head,int data)
{
  Node * p = new Node();
    p->data = data;
    p->next = head;
    head = p;
    return head;
}

int CompareLists(Node *headA, Node* headB)
{
    while(headA && headB)
    {
        if(headA->data != headB->data)
        {
            return 0;
        }
        headA=headA->next;
        headB=headB->next;
        
    }
    if(!headA && !headB)
        return 1;
    else
        return 0;

}

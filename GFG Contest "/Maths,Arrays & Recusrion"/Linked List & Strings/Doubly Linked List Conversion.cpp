void makeDoubly(struct Node * head)
{
    struct Node *temp=head;
    struct Node *temp_next=temp;
    temp_next=temp->next;
    while(temp_next)
    {
        temp_next->prev=temp;
        temp=temp_next;
        temp_next=temp->next;
    }
}

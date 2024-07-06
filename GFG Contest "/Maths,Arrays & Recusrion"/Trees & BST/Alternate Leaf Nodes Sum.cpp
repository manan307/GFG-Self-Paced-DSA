
int counter=0;
int leafSumAlternateutil(Node * root)
{
    if(root==NULL)
    return 0;
    
    int sum=0;
    
    if(root->left==NULL and root->right==NULL)
    {
        if(counter%2==0)
        sum=sum+root->data;
        counter++;
    }
    
    return sum+leafSumAlternateutil(root->left)+leafSumAlternateutil(root->right);
}

int leafSumAlternate(Node * root)
{
    if(root==NULL)
    return 0;
    
    counter=0;
    
    return leafSumAlternateutil(root);
}

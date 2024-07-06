void inOrderBST(Node *root,vector<Node *>&v)
{
    if(root==NULL)
    return;
    
    inOrderBST(root->left,v);
    v.push_back(root);
    inOrderBST(root->right,v);
}

int median(Node *root,int k)
{
    if(root==NULL)
    return -1;
    
    vector<Node *>v;
    
    inOrderBST(root,v);
    
    Node *subtreeRoot=v[k-1];
    
    v.clear();
    
    inOrderBST(subtreeRoot,v);
    
    int len=v.size();
    
    if(len%2!=0)
    {
        return v[len/2]->data;
    }
    else
    {
         return (v[len/2]->data+v[(len/2)-1]->data)/2;
    }
    
}

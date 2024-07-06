int ans=0;

void rec(Node *node,int lvl,int req){
    if(node==NULL) return ;
    if(lvl==req) ans++;
    rec(node->left,lvl+1,req);
    rec(node->right,lvl+1,req);
}

int Count(Node *node,int L){
    
    ans=0;
    rec(node,1,L);
    return ans;

    
}

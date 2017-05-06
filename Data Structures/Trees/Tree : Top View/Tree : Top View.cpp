/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void goLeft(node* root){
    if(root!=NULL){
        goLeft(root->left);
        cout<<root->data<<" ";
    }
}

void goRight(node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        goRight(root->right);
    }
}

void top_view(node * root)
{
    if(root!=NULL){
        goLeft(root->left);
        cout<<root->data<<" ";
        goRight(root->right);
    }
}


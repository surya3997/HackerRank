
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    int num1,num2;
    if(root==NULL)
        return -1;
    else{
        num1=height(root->left);
        num2=height(root->right);
        if(num1>num2)
            return num1+1;
        else
            return num2+1;
    }
}
  


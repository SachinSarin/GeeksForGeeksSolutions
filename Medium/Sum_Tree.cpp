class Solution
{
    public:
    int sum(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return sum(root->left) + root->data + sum(root->right);
    }
    bool isSumTree(Node* root)
    {
         // Your code hereif
         if(root==NULL||root->left==NULL&&root->right==NULL)
         {
             return 1;
         }
         int left = sum(root->left);
         int right = sum(root->right);
         if(root->data==left+right&&isSumTree(root->left)&&isSumTree(root->right))
         {
             return 1;
         }
         return 0;
    }
};

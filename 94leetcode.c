/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int i = 0;
int arr[100];
void inorder(struct TreeNode* root){
    if(root != NULL){
    inorder(root->left);
    arr[i++] = root->val;
    inorder(root->right);
    }
}
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    inorder(root);
    int *vet = malloc(i*sizeof(int));
    for(int j = 0; j < i;j++){
        vet[j] = arr[j];
    }
    *returnSize = i;
    i = 0;
    return vet;
}

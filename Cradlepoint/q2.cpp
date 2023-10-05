#include <iostream>
#include <vector>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

std::vector<int> treeList;

void makeList(TreeNode* t) {
    if (t->left != nullptr) {
        makeList(t->left);
    }
    treeList.push_back(t->value);
    if (t->right != nullptr) {
        makeList(t->right);
    }
}

int kthSmallestInBST(TreeNode* t, int k) {
    treeList.clear();
    makeList(t);
    return treeList[k - 1];
}

#pragma once
#ifndef __BINTREE_H__
#define __BINTREE_H__

typedef struct node {
	char element;
	struct node* left;
	struct node* right;

}TreeNode;

class BinTree
{
public:
	BinTree();
	~BinTree();
	void createTree();
	void preorderBinaryTree();
	void inorderBinaryTree();
	void postorderBinaryTree();
private:
	TreeNode* root;

	void insertTreeNode(char ele);
	void preorderBinTree(TreeNode *root);
	void inorderBinTree(TreeNode *root);
	void postorderBinTree(TreeNode *root);
};

#endif

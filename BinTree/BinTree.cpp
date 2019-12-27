#include <iostream>
#include "BinTree.h"
using namespace std;

BinTree::BinTree()
{
	root = NULL;
}

BinTree::~BinTree()
{
}

void BinTree::insertTreeNode(char ele) {
	
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));

	node->element = ele;
	node->left = NULL;
	node->right = NULL;
	if (root==NULL)//判断树是不是空树
	{
		root = node;
	}
	else {//不是空树
		TreeNode* temp = root;//从树根开始
		while (temp!=NULL)
		{
			if (ele < temp->element)//若小于则进入左子树
			{
				if (temp->left==NULL)
				{
					temp->left = node;
					return;
				}
				else
				{
					temp = temp->left;
				}
			}
			else//否则就进入右子树
			{
				if (temp->right==NULL)
				{
					temp->right = node;
					return;
				}
				else
				{
					temp=temp->right;
				}
			}
		}
		
	}
	return;
}
void BinTree::createTree() {
	int n;
	cout << "树中有多少个节点？" << endl;
	cin >> n;
	cout << "请输入树节点：" << endl;
	for (int i = 0; i < n; i++)//输入n个节点,并创建这个树
	{
		char ele;
		cin >> ele;
		insertTreeNode(ele);
	}
	cout << "二叉树构建完毕！" << endl;
}

//前序遍历：根左右
void BinTree::preorderBinTree(TreeNode *root) {
	if (!root) return;
	else {
		cout << root->element;
		preorderBinTree(root->left);
		preorderBinTree(root->right);
	}
}
void BinTree::preorderBinaryTree() {
	preorderBinTree(root);
	cout << endl;
 }

//中序遍历：左根右
void BinTree::inorderBinTree(TreeNode *root) {
	if (!root) return;
	else {
		inorderBinTree(root->left);
		cout << root->element;
		inorderBinTree(root->right);
	}
}
void BinTree::inorderBinaryTree() {
	inorderBinTree(root);
	cout << endl;
}

//后序遍历：左右根
void BinTree::postorderBinTree(TreeNode *root) {
	if (!root) return;
	else {
		postorderBinTree(root->left);
		postorderBinTree(root->right);
		cout << root->element;
	}
}
void BinTree::postorderBinaryTree() {
	postorderBinTree(root);
	cout << endl;
}
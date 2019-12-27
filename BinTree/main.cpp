#include <iostream>
#include "BinTree.h"
using namespace std;

int main() {
	cout << "创建二叉树:" << endl;
	BinTree tree;
	tree.createTree();
	tree.preorderBinaryTree();//前序遍历
	tree.inorderBinaryTree();//中序遍历
	tree.postorderBinaryTree();//后序遍历

	system("pause");
	return 0;
}
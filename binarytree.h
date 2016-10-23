//BFS and DFS
/**
 * <!--
 * File   : binarytree.h
 * Author : Yolanda Duan
 * Date   : 2016-10-06
 * --!>
 */
#include <stdio.h>
#include <stdlib.h>
#include <Stack> //堆栈，先进后出  
#include <Queue> //队列，先进先出
using namespace std;
#define Element char
#define format "%c"
 
typedef struct Node
{
	Element data;
	struct Node *lchild;
	struct Node *rchild;
} *Tree;

int x = 0; //全局索引变量

//二叉树构造器，按先序遍历顺序构造二叉树，无左子树或右子树用‘＃’表示
void treeNodeConstructor(Tree &root, Element data[]){
	Element e = data[x++];
	if(e == '#'){
		root = NULL;
	}else{
		root = (Node *)malloc(sizeof(Node));
		root->data = e;
		treeNodeConstructor(root->lchild, data); //递归构建左子树 
		treeNodeConstructor(root->rchild, data); //递归构建右子树
	}

}

void depthFirstSearch(Tree root){
	stack<Node *> nodeStack; //使用c++的STL标准模板库
	nodeStack.push(root);
	Node *node;
	while(!nodeStack.empty()){
		node = nodeStack.top();
		printf(format, node->data); //遍历根结点
		nodeStack.pop();
		if(node->rchild){
			nodeStack.push(node->rchild); //先将右子树压栈
		}
		if(node->lchild){
			nodeStack.push(node->lchild); //再将左子树压栈
		}
	}
}

void breadthFirstSearch(Tree root){
	queue<Node *> nodeQueue; //使用c++的STL标准模板库
	nodeQueue.push(root);
	Node *node;
	while(!nodeQueue.empty()){
		node = nodeQueue.front();
		nodeQueue.pop();
		printf(format, node->data);
		if(node->lchild){
			nodeQueue.push(node->lchild); //先将左子树入队 
		}
		if(node->rchild){
			nodeQueue.push(node->rchild); //再将右子树入队
		}
	}

}











#include<stdio.h>
#include<stdlib.h>

typedef struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
}BSTnode;

BSTnode* insert(BSTnode *T, int x);

int isBST(BSTnode *T);

void inorder(BSTnode *T);
void preorder(BSTnode *T);
void postorder(BSTnode *T);
void leftView(BSTnode *T);
void rightView(BSTnode *T);
void topView(BSTnode *T);

void degreeOfNode(BSTnode *T);

int searchBST(BSTnode* t, int key);

int minvalue(BSTnode *T);
int maxvalue(BSTnode *T);

int countNodes(BSTnode *T);
int countLeafNodes(BSTnode *T);

int sumOfNodes(BSTnode *T);
int sumOfLeafNodes(BSTnode *T);

int sumOfEvenNodes(BSTnode *T);
int sumOfOddNodes(BSTnode *T);

int compare(BSTnode *T1, BSTnode *T2);

BSTnode* copy(BSTnode *T);
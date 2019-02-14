#include<stdio.h>
#include<stdlib.h>

struct BSTnode
{
char data;
struct BSTnode *right;
struct BSTnode *left;
};

void Pre_order(struct BSTnode *root)
{
  if (root == NULL)return;
  if (((root->left)==NULL)&&((root->right)==NULL)){
  printf("-->%c",root->data );

  }
  Pre_order(root->left);
  Pre_order(root->right);
}

void Post_order(struct BSTnode *root)
{
  if (root == NULL)return;

  Post_order(root->left);
  Post_order(root->right);
  if (((root->left)==NULL)&&((root->right)==NULL)){
  printf("-->%c",root->data );

  }
}

void In_order(struct BSTnode *root)
{
  if (root == NULL)return;

  In_order(root->left);
  if (((root->left)==NULL)&&((root->right)==NULL)){
  printf("-->%c",root->data );

  }
  In_order(root->right);
}


int main()
{

struct BSTnode* a1 = NULL;
struct BSTnode* a2 = NULL;
struct BSTnode* a3 = NULL;
struct BSTnode* a4 = NULL;
struct BSTnode* a5 = NULL;
struct BSTnode* a6 = NULL;
struct BSTnode* a7 = NULL;
struct BSTnode* a8 = NULL;
struct BSTnode* a9 = NULL;
struct BSTnode* a10 = NULL;
struct BSTnode* a11 = NULL;
struct BSTnode* a12 = NULL;
struct BSTnode* a13 = NULL;
struct BSTnode* a14 = NULL;
struct BSTnode* a15 = NULL;
struct BSTnode* a16 = NULL;
struct BSTnode* a17 = NULL;
struct BSTnode* a18 = NULL;
struct BSTnode* a19 = NULL;
struct BSTnode* a20 = NULL;
struct BSTnode* a21 = NULL;
struct BSTnode* a22 = NULL;
struct BSTnode* a23 = NULL;
struct BSTnode* a24 = NULL;

a1 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a2 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a3 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a4 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a5 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a6 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a7 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a8 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a9 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a10 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a11 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a12 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a13 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a14 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a15 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a16 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a17 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a18 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a19 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a20 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a21 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a22 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a23 = (struct BSTnode*)malloc(sizeof(struct BSTnode));
a24 = (struct BSTnode*)malloc(sizeof(struct BSTnode));


a1->data = 'K'; //assign data in first BSTnode
a1->left = NULL; //assign data in first BSTnode
a1->right = NULL; // Link first BSTnode with second


a2->data = 'C'; //assign data in first BSTnode
a2->left = a3; //assign data in first BSTnode
a2->right = a6; // Link first BSTnode with second

a3->data = 'G'; //assign data in first BSTnode
a3->left = NULL; //assign data in first BSTnode
a3->right = NULL; // Link first BSTnode with second

a4->data = ' '; //assign data in first BSTnode
a4->left = a14; //assign data in first BSTnode
a4->right = NULL; // Link first BSTnode with second

a5->data = 'A'; //assign data in first BSTnode
a5->left = a10; //assign data in first BSTnode
a5->right = a2; // Link first BSTnode with second

a6->data = 'H'; //assign data in first BSTnode
a6->left = a17; //assign data in first BSTnode
a6->right = a1; // Link first BSTnode with second

a7->data = 'L'; //assign data in first BSTnode
a7->left = NULL; //assign data in first BSTnode
a7->right = NULL; // Link first BSTnode with second

a8->data = ' '; //assign data in first BSTnode
a8->left = a9; //assign data in first BSTnode
a8->right = NULL; // Link first BSTnode with second

a9->data = ' '; //assign data in first BSTnode
a9->left = a4; //assign data in first BSTnode
a9->right = NULL; // Link first BSTnode with second

a10->data = 'B'; //assign data in first BSTnode
a10->left = a18; //assign data in first BSTnode
a10->right = a13; // Link first BSTnode with second

a11->data = ' '; //assign data in first BSTnode
a11->left = a19; //assign data in first BSTnode
a11->right = NULL; // Link first BSTnode with second

a12->data = 'F'; //assign data in first BSTnode
a12->left = NULL; //assign data in first BSTnode
a12->right = NULL; // Link first BSTnode with second

a13->data = 'E'; //assign data in first BSTnode
a13->left = a12; //assign data in first BSTnode
a13->right = NULL; // Link first BSTnode with second

a14->data = ' '; //assign data in first BSTnode
a14->left = a15; //assign data in first BSTnode
a14->right = NULL; // Link first BSTnode with second

a15->data = ' '; //assign data in first BSTnode
a15->left = a16; //assign data in first BSTnode
a15->right = NULL; // Link first BSTnode with second

a16->data = ' '; //assign data in first BSTnode
a16->left = a11; //assign data in first BSTnode
a16->right = NULL; // Link first BSTnode with second

a17->data = 'J'; //assign data in first BSTnode
a17->left = a7; //assign data in first BSTnode
a17->right = NULL; // Link first BSTnode with second

a18->data = 'D'; //assign data in first BSTnode
a18->left = NULL; //assign data in first BSTnode
a18->right = NULL; // Link first BSTnode with second

a19->data = ' '; //assign data in first BSTnode
a19->left = a20; //assign data in first BSTnode
a19->right = NULL; // Link first BSTnode with second

a20->data = ' '; //assign data in first BSTnode
a20->left = a21; //assign data in first BSTnode
a20->right = NULL; // Link first BSTnode with second

a21->data = ' '; //assign data in first BSTnode
a21->left = a22; //assign data in first BSTnode
a21->right = NULL; // Link first BSTnode with second

a22->data = ' '; //assign data in first BSTnode
a22->left = a23; //assign data in first BSTnode
a22->right = NULL; // Link first BSTnode with second

a23->data = ' '; //assign data in first BSTnode
a23->left = a24; //assign data in first BSTnode
a23->right = NULL; // Link first BSTnode with second

a24->data = ' '; //assign data in first BSTnode
a24->left = NULL; //assign data in first BSTnode
a24->right = NULL; // Link first BSTnode with second

printf("Terminal nodes [Pre_order traversal] -\n" );
Pre_order(a5);
printf("\n" );

printf("Terminal nodes [Post_order traversal]-\n" );
Post_order(a5);
printf("\n" );

printf("Terminal nodes [In_order traversal]-\n" );
In_order(a5);
printf("\n" );

}

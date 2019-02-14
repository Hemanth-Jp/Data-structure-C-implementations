#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char NNN[10];

struct BSTnode
{
int data;
char Name[10];
char ssn[12];
char sex[10];
int salary;
struct BSTnode *right;
struct BSTnode *left;
};

void In_order(struct BSTnode *root)
{

  if (root == NULL)return;

  In_order(root->left);
 //if (strcmp(root->Name,NNN)==0) {
    printf("Employee Record of %s:- SSN: %s\tSEX: %s\tSALARY: %d\t\n",root->Name,root->ssn,root->sex,root->salary );
  //}
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


a1->data = 1;
strcpy(a1->Name," ");
strcpy(a1->ssn," ");
strcpy(a1->sex," ");
a1->salary=0;
a1->left = NULL;
a1->right = NULL;


a2->data = 2;
strcpy(a2->Name,"David");
strcpy(a2->ssn,"192-38-7282");
strcpy(a2->sex,"Female");
a2->salary=22800;//assign data in first BSTnode
a2->left = NULL; //assign data in first BSTnode
a2->right = a12; // Link first BSTnode with second

a3->data = 3;
strcpy(a3->Name,"Kelly");
strcpy(a3->ssn,"165-64-3351");
strcpy(a3->sex,"Male");
a3->salary=19000; //assign data in first BSTnode
a3->left = NULL; //assign data in first BSTnode
a3->right = NULL; // Link first BSTnode with second

a4->data = 4;
strcpy(a4->Name,"Green");
strcpy(a4->ssn,"175-56-2251");
strcpy(a4->sex,"Male");
a4->salary=27200; //assign data in first BSTnode
a4->left = a2; //assign data in first BSTnode
a4->right = NULL; // Link first BSTnode with second

a5->data = 5;
strcpy(a5->Name," ");
strcpy(a5->ssn,"009");
strcpy(a5->sex," ");
a5->salary=0; //assign data in first BSTnode
a5->left = a1; //assign data in first BSTnode
a5->right = NULL; // Link first BSTnode with second

a6->data = 6;
strcpy(a6->Name,"Brown");
strcpy(a6->ssn,"178-52-1065");
strcpy(a6->sex,"Female");
a6->salary=14700; //assign data in first BSTnode
a6->left = NULL; //assign data in first BSTnode
a6->right = NULL; // Link first BSTnode with second

a7->data = 7;
strcpy(a7->Name,"lewis");
strcpy(a7->ssn,"181-58-9939");
strcpy(a7->sex,"Female");
a7->salary=16400; //assign data in first BSTnode
a7->left = a3; //assign data in first BSTnode
a7->right = a10; // Link first BSTnode with second

a8->data = 8;
strcpy(a8->Name," ");
strcpy(a8->ssn," ");
strcpy(a8->sex," ");
a8->salary=0;//assign data in first BSTnode
a8->left = a11; //assign data in first BSTnode
a8->right = NULL; // Link first BSTnode with second

a9->data = 9;
strcpy(a9->Name,"Cohen");
strcpy(a9->ssn,"177-44-4557");
strcpy(a9->sex,"Male");
a9->salary=19000; //assign data in first BSTnode
a9->left = a6; //assign data in first BSTnode
a9->right = a4; // Link first BSTnode with second

a10->data = 10;
strcpy(a10->Name,"Robin");
strcpy(a10->ssn,"135-46-6262");
strcpy(a10->sex,"Female");
a10->salary=15500;//assign data in first BSTnode
a10->left = NULL; //assign data in first BSTnode
a10->right = NULL; // Link first BSTnode with second

a11->data = 11;
strcpy(a11->Name," ");
strcpy(a11->ssn," ");
strcpy(a11->sex," ");
a11->salary=0; //assign data in first BSTnode
a11->left = a13; //assign data in first BSTnode
a11->right = NULL; // Link first BSTnode with second

a12->data = 12;
strcpy(a12->Name,"Evans");
strcpy(a12->ssn,"168-56-8113");
strcpy(a12->sex,"Male");
a12->salary=34200; //assign data in first BSTnode
a12->left = NULL; //assign data in first BSTnode
a12->right = NULL; // Link first BSTnode with second

a13->data = 13;
strcpy(a13->Name," ");
strcpy(a13->ssn," ");
strcpy(a13->sex," ");
a13->salary=0; //assign data in first BSTnode
a13->left = a5; //assign data in first BSTnode
a13->right = NULL; // Link first BSTnode with second

a14->data = 14;
strcpy(a14->Name,"harris");
strcpy(a14->ssn,"208-56-1654");
strcpy(a14->sex,"Female");
a14->salary=22800; //assign data in first BSTnode
a14->left = a9; //assign data in first BSTnode
a14->right = a7; // Link first BSTnode with second


// printf("Provide the Employee Name whose Record you need\n" );
// scanf("%s",&NNN);

In_order(a14);
printf("\n" );

}

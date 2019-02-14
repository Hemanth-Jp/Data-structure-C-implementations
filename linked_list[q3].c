// A simple C program for traversal of a linked list
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
int data;
//int age;
struct Node *next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *n)
{
    int age;
    //printf("give the age bar\n");
    //scanf("%d",&age);


while (n != NULL)
{
    char client[30][10] = {{"hall"},{"moss"},{"ford"},{"brown"},{"ginn"},{"pride"},{" "},{"berk"},{"white"},{" "},{"todd"},{"dixon"},{"newman"},{"harris"},{" "},{"jackson"},{" "},{"robert"},{" "},{"elsen"},{"adams"},{"cohen"},{" "},{"fisher"},{"graves"},{" "},
   {"parker"},{" "},{"singer"},{"lewis"}};
   int client_age[30] = { 35,28,47,54,38,42,0,38,45,0,25,32,46,42,0,52,0,40,0,32,48,36,0,33,42,0,50,0,45,28};
    if (client_age[n->data-1]>age)
     	printf(" %s Age- %d\n", client[n->data-1],client_age[n->data-1]);
	n = n->next;
}
printf("\n");
}

int main()
{
struct Node* a1 = NULL;
struct Node* a2 = NULL;
struct Node* a3 = NULL;
struct Node* a4 = NULL;
struct Node* a5 = NULL;
struct Node* a6 = NULL;
struct Node* a7 = NULL;
struct Node* a8 = NULL;
struct Node* a9 = NULL;
struct Node* a10 = NULL;
struct Node* a11 = NULL;
struct Node* a12 = NULL;
struct Node* a13 = NULL;
struct Node* a14 = NULL;
struct Node* a15 = NULL;
struct Node* a16 = NULL;
struct Node* a17 = NULL;
struct Node* a18 = NULL;
struct Node* a19 = NULL;
struct Node* a20 = NULL;
struct Node* a21 = NULL;
struct Node* a22 = NULL;
struct Node* a23 = NULL;
struct Node* a24 = NULL;
struct Node* a25 = NULL;
struct Node* a26 = NULL;
struct Node* a27 = NULL;
struct Node* a28 = NULL;
struct Node* a29 = NULL;
struct Node* a30 = NULL;


// allocate 3 nodes in the heap
a1 = (struct Node*)malloc(sizeof(struct Node));
a2 = (struct Node*)malloc(sizeof(struct Node));
a3 = (struct Node*)malloc(sizeof(struct Node));
a4 = (struct Node*)malloc(sizeof(struct Node));
a5 = (struct Node*)malloc(sizeof(struct Node));
a6 = (struct Node*)malloc(sizeof(struct Node));
a7 = (struct Node*)malloc(sizeof(struct Node));
a8 = (struct Node*)malloc(sizeof(struct Node));
a9 = (struct Node*)malloc(sizeof(struct Node));
a10 = (struct Node*)malloc(sizeof(struct Node));
a11 = (struct Node*)malloc(sizeof(struct Node));
a12 = (struct Node*)malloc(sizeof(struct Node));
a13 = (struct Node*)malloc(sizeof(struct Node));
a14 = (struct Node*)malloc(sizeof(struct Node));
a15 = (struct Node*)malloc(sizeof(struct Node));
a16 = (struct Node*)malloc(sizeof(struct Node));
a17 = (struct Node*)malloc(sizeof(struct Node));
a18 = (struct Node*)malloc(sizeof(struct Node));
a19 = (struct Node*)malloc(sizeof(struct Node));
a20 = (struct Node*)malloc(sizeof(struct Node));
a21 = (struct Node*)malloc(sizeof(struct Node));
a22 = (struct Node*)malloc(sizeof(struct Node));
a23 = (struct Node*)malloc(sizeof(struct Node));
a24 = (struct Node*)malloc(sizeof(struct Node));
a25 = (struct Node*)malloc(sizeof(struct Node));
a26 = (struct Node*)malloc(sizeof(struct Node));
a27 = (struct Node*)malloc(sizeof(struct Node));
a28 = (struct Node*)malloc(sizeof(struct Node));
a29 = (struct Node*)malloc(sizeof(struct Node));
a30 = (struct Node*)malloc(sizeof(struct Node));


a1->data = 1; //assign data in first node
a1->next = a16; // Link first node with second

a2->data = 2; //assign data to second node
a2->next = a13;

a3->data = 3; //assign data to third node
a3->next = a25;

a4->data = 4; //assign data to third node
a4->next = a22;

a5->data = 5; //assign data to third node
a5->next = a14;

a6->data = 6; //assign data to third node
a6->next = a29;

a7->data = 7; //assign data to third node
a7->next = a26;

a8->data = 8; //assign data to third node
a8->next = a3;

a9->data = 9; //assign data to third node
a9->next = NULL;

a10->data = 10; //assign data to third node
a10->next = a28;

a11->data = 11; //assign data to third node
a11->next = NULL;

a12->data = 12; //assign data to third node
a12->next = a24;

a13->data = 13; //assign data to third node
a13->next = a6;

a14->data = 14; //assign data to third node
a14->next = a30;

a15->data = 15; //assign data to third node
a15->next = a7;

a16->data = 16; //assign data to third node
a16->next = a27;

a17->data = 17; //assign data to third node
a17->next = a23;

a18->data = 18; //assign data to third node
a18->next = NULL;

a19->data = 19; //assign data to third node
a19->next = NULL;

a20->data = 20; //assign data to third node
a20->next = a1;

a21->data = 21; //assign data to third node
a21->next = a5;

a22->data = 22; //assign data to third node
a22->next = a20;

a23->data = 23; //assign data to third node
a23->next = a19;

a24->data = 24; //assign data to third node
a24->next = a18;

a25->data = 25; //assign data to third node
a25->next = a11;

a26->data = 26; //assign data to third node
a26->next = a10;

a27->data = 27; //assign data to third node
a27->next = a9;

a28->data = 28; //assign data to third node
a28->next = a17;

a29->data = 29; //assign data to third node
a29->next = NULL;

a30->data = 30; //assign data to third node
a30->next = a2;


int k=0;
char LLL[10];
printf("give Lawyer's Name [LLL] whose list of clients you want to look up\n" );
scanf("%s",&LLL);
//printf("%s",LLL);

if (strcmp(LLL,"Davis")==0) {
  k=1;
}
if (strcmp(LLL,"Levinine")==0) {
  k=2;
}
if (strcmp(LLL,"Nelson")==0) {
  k=3;
}
if (strcmp(LLL,"Rogers")==0) {
  k=4;
}

if (k==1){
printf("davis's clints - \n");
printList(a4);
}
if (k==2){
printf("Levinine's clints - \n");
printList(a12);
}
if (k==3){
printf("Nelson's clints - \n");
printList(a21);
}
if (k==4){
printf("Rogers's clints - \n");
printList(a8);
}
if (k==0)
{
    printf("Lawyer not present");

}

return 0;
}

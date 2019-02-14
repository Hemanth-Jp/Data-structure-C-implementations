#include<stdio.h>
#define max_size 10
int q[max_size];
int rear=-1,front=-1;
int value,op;
////////////////////PUSH // enqueue//////////////////
void enqueue(int x){
  if (((rear+1)%10)==front){
    printf("error: queue is full\n" );
    return;
    }
else if(is_empty()){
  rear=0;front=0;
  q[rear]=x;
   }
else{
  rear=(rear+1)%10;
  q[rear]=x;
}
}
////////////////////////////////////////////////////

int is_empty(){
  if (front == -1 && rear==-1)
        return 1;
  else
        return 0;

}

////////////////////POP // Dequeue//////////////////

void Dequeue() {
  if (is_empty()){
    printf("error: queue is emty\n" );
    return;
}
else if (front==rear){
   q[front]=0;
   rear=-1,front=-1;
  }
else
{
    q[front]=0;
  front=(front+1)%10;
}

}
//////////////////////////////////////////

//////////////////////////////////////////
void print(){
  int i;
  for ( i = 0; i <=9; i++) {
    printf("%d ",q[i] );
  }
      printf("\n" );

}


////////////////////////////////////////////

///////////////////////////////////////////


void main(){

  while(1){
     printf("what operartion do u want to perform on the circular queue\nenqueue(1),Dequeue(2),");
      scanf("%d",&op);
    switch (op)
   {
       case 1: {printf("Choice is 1 , provide the value ");scanf("%d",&value);enqueue(value);printf("value is pushed\n");print();
       printf("rear:%d front:%d",rear,front);break; }

       case 2: {printf("Choice is 2");Dequeue();printf("poped\n");print();printf("rear:%d front:%d\n",rear,front);break; }

    //   case 3: {printf("Choice is 3");emty();printf("value is pushed");print();break; }

    //   case 4: {printf("Choice is 4 ");midD() ;print();}


       //default: printf("Choice other than 1, 2 and 3 NOT VALID");print();break;

   }

  }
}

#include<stdio.h>
#define max_size 10
int a[max_size];
int top =-1;
int value,op;
////////////////////PUSH//////////////////
void push(int x){
  if (top== max_size-1){
    printf("error: stack overflow\n" );
    return;
  }
a[++top]=x;
}
//////////////////////////////////////////

////////////////////POP//////////////////

void pop() {
  if (top== - 1){
    printf("error: stack is emty\n" );
    return;
}
    top=top-1;

}
//////////////////////////////////////////
// int top(){
//   return a[top];
// }
//////////////////////////////////////////
void print(){
  int i;
  for ( i = 0; i < top+1; i++) {
    printf("%d ",a[i] );
  }
      printf("\n" );

}


/////////////////emty////////////////////////

void emty(){
    top=-1;
    printf("THE stsck is emtied!!!!!");
  }

////////////////////////////////////////////
void midD()
{


  {
     int j,m;
      m= (top+1)/2;

      printf("\n The popped elements is %d \n",a[m]);
      for(j=0;j<top;j++)
      {
          if (j==m)
          {
              a[j]=a[j+1];
              m++;
          }

      }
      top--;

  }
}
///////////////////////////////////////////


void main(){

  while(1){
     printf("what operartion do u want to perform on the stack\n push(1),pop(2),emty(3),MID(4)");
    scanf("%d",&op);
    switch (op)
   {
       case 1: {printf("Choice is 1 , provide the value ");scanf("%d",&value);push(value);printf("value is pushed\n");print();break; }

       case 2: {printf("Choice is 2");pop();printf("poped\n");print();break; }

       case 3: {printf("Choice is 3");emty();printf("value is pushed");print();break; }

       case 4: {printf("Choice is 4 ");midD() ;print();}


       //default: printf("Choice other than 1, 2 and 3 NOT VALID");print();break;

   }

  }




}

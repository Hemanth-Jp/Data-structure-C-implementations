#include<stdio.h>
#include<string.h>
#define max_size 10
char stack[max_size];
int top =-1,j,balanced;
int value,op;
////////////////////PUSH//////////////////
void push(char x){
  if (top== max_size-1){
    printf("error: stack overflow\n" );
    return;
  }
stack[++top]=x;
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

//////////////////////////////////////////
// void print(){
//   int i;
//   for ( i = 0; i < top+1; i++) {
//     printf("%c ",stack[i] );
//   }
//       printf("\n" );

// }

//////////////////////////////////////////////////
int check_pair(char t){
    printf("%c\n",t);
    if(stack[top]=='(' && t==')'){
      pop();
      balanced=1;
      return 1;
      }
  else if(stack[top]=='[' && t==']'){
    pop();
    balanced=1;

    return 1;
    }
  else if(stack[top]=='{' && t=='}'){
    pop();
    balanced=1;

    printf("came!");

    return 1;
    }
  else

    balanced=0;
}
//////////////////////////////////////////////////

void main(){

     char exp[20]="()(){}";
     int i,result=1;
     printf("lenth:%d\n",strlen(exp));


     for ( j = 0; j <(strlen(exp)); j++) {
            if (exp[j]=='(' ||exp[j]=='{' || exp[j]=='['){
                printf("opening\n");
            push(exp[j]);

       }


      else if (exp[j]==')' ||exp[j]=='}' || exp[j]==']'){
                printf("closing\n");

              if ((top==-1)){
                  balanced=0;
                  break;

          }
          check_pair(exp[j]);
     }

}

if (balanced&&top==-1){printf("balanced");}
else printf("UNbalanced");
}

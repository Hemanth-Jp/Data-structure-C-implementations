#include <stdio.h>
void LINEAR(char ssn1[]);
char ssn[25][11] = {
  	{"211-58-1329"},
  	{"169-38-4248"},
  	{"166-48-5842"},
  	{"187-52-4076"},
  	{"126-63-6382"},
  	{"135-58-9565"},
  	{"172-48-1849"},
  	{"192-60-3157"},
  	{"160-60-1826"},
  	{"166-52-4147"},
  	{"186-58-0430"},
  	{"157-58-1123"},
  	{"174-58-0732"},
  	{"183-52-3865"},
  	{"135-48-1397"},
  	{"182-52-6712"},
  	{"154-48-8539"},
  	{"187-48-2377"}};

int main()
{
    char ssn1[12];
    printf("Enter string: ");
    gets(ssn1);
    LINEAR(ssn1);     // Passing string c to function.
    return 0;
}
void LINEAR(char ssn1[]){
    int i,found=-1;
    printf("String Output: ");
    puts(ssn1);
    for (i=0;i<20;i++){

    if (strcmp(ssn1,ssn[i])==0){
         found=0;
         printf("The ssn is present @ location %d",i+1);
     }

    }
    if (found==-1)
     printf("The ssn is NOT present ");

}

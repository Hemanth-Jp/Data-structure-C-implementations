#include <stdio.h>
#include <string.h>
void main(){
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

  char lstn[25][50]={{"Adams"},
  	{"Bailey"},
  	{"Cheng"},
  	{"Davis"},
  	{"Edwards"},
  	{"Fox"},
  	{"Green"},
  	{"Hopkins"},
  	{"Klein"},
  	{"Lee"},
  	{"Murphy"},
  	{"Newman"},
  	{"Osborn"},
  	{"Parker"},
  	{"Rogers"},
  	{"Schwab"},
  	{"Thompson"},
  	{"white"}};

  char name[25][50]={
  	{"Bruce"},
  	{"Irene.L"},
  	{"Kim"},
  	{"John C"},
  	{"Steven"},
  	{"Kenneth"},
  	{"Gerald S."},
  	{"Gary"},
  	{"Deborah M"},
  	{"John"},
  	{"William"},
  	{"Ronal P."},
  	{"Paul"},
  	{"David"},
  	{"Mary J."},
  	{"Joana"},
  	{"David E."},
  	{"adam"}};

  float cum[25]={2.55,3.25,3.40,2.85,1.75,2.80,2.35,2.70,3.05,2.60,2.30,3.90,2.05,1.55,1.85,2.95,3.15,2.50};

  int year[25]={2,4,1,2,3,2,1,4,2,1,2,3,4,1,1,4,3,2,};
int i=0;
  float cumVALUE;
  printf("give the value of cum \n " );
  scanf("%f",&cumVALUE);
  printf("the following students have CUM value above %f\n",cumVALUE );
 for (i=0;i<20;i++){
   if (cum[i]>cumVALUE){

      printf(" %s ,",name[i] );
   }
 }
}

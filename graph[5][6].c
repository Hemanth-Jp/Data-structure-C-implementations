#include<stdio.h>
#include<string.h>
void main()


{
    int stops[8][8]=   {{0,3,2,2,4,3,1,4},
                    {2,0,3,1,1,2,2,1},
                    {2,3,0,2,4,3,1,4},
                    {2,1,2,0,2,1,1,2},
                    {1,3,3,2,0,1,2,4},
                    {2,2,3,1,1,0,2,3},
                    {1,2,1,1,3,2,0,3},
                    {3,1,4,2,2,3,3,0}};


    int cost[8][8] =      {{0,   310, 220, 260, 340, 300, 140, 390},
                        {160, 0,   250, 50,  80,  90,  170, 80},
                        {220, 250, 0,   200, 280, 240, 80,  330},
                        {160, 50,  200, 0,   80,  40,  120, 130},
                        {80,  130, 280, 80,  0,   40,  200, 210},
                        {120, 90,  240, 40,  40,  0,   160, 170},
                        {140, 170, 80,  120, 200, 160, 0,   250},
                        {240, 80,  330, 130, 160, 170, 250, 0 } };

    char city[8][15] ={{"Atlanta"},
                        {"Boston"},
                        {"Houston"},
                        {"New_York"},
                        {"Washington"},
                        {"Philadelphia"},
                        {"Denver"},
                        {"Chicago"}};






    char city_a [12];
    char city_b [12];
    int from,too,i,j;
    //printf("%s ",city[1]);

    // for(i=0;i<=7;i++){

    //         printf("%s %d ",city[i],i);
    //     printf("\n");
    // }

    // for (i=0;i<=7;i++){
    //     for (j=0;j<=7;j++){
    //         printf("%d ",[i][j]);
    //     }printf("\n");
    // }

   printf(" Give the -CITY A- name (Origin)\n");
   scanf("%s",&city_a);

   printf(" Give the -CITY B- name (Destination)\n");
   scanf("%s",&city_b);

for (i=0;i<=7;i++){
       if (strcmp(city_a,city[i])==0){
           from=i;
           //printf("%d",from);
       }}
for (j=0;j<=7;j++){
       if (strcmp(city_b,city[j])==0){
           too=j;
           //printf("%d",to);
       }}


   if (cost[from][too]>0){
   printf("Flight EXIST from %s %d to %s %d \n",city_a,from,city_b,too);
   printf("The optimal cost of the Flight will be %d \n",cost[from][too]);
   printf("The Stops will be %d \n",stops[from][too]-1);


}
}

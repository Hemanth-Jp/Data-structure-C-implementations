#include <stdio.h>
void Binary(float cum);
  float cum1[25]={2.55,3.25,3.40,2.85,1.75,2.80,2.35,2.70,3.05,2.60,2.30,3.90,2.05,1.55,1.85,2.95,3.15,2.50};

int main()
{
    float cum,temp;
    int i,j;
    printf("given array:\n");
    for(j=0;j<18;j++)
		{
         printf("%f  ",cum1[j]);
         }

    for(i=0;i< 18;i++)
	{
		for(j=i+1;j<18;j++)
		{
			if(cum1[i]>cum1[j])
			{
				temp 	=cum1[i];
				cum1[i]	=cum1[j];
				cum1[j]	=temp;
			}
		}
	}
    printf("\nsorted array\n");
    for(j=0;j<18;j++)
		{
         printf("%f  ",cum1[j]);
         }




    printf("\nEnter cum value: ");
    scanf("%f",&cum);
    Binary(cum);     // Passing cum to function.
    return 0;
}
void Binary(float cum){
    int a[50], n=18, item, loc, beg, mid, end, i;

    // int i,found=-1;

    // for (i=0;i<20;i++){

    // if (cum==cum1[i]){
    //      found=0;
    //      printf("The cum value is present @ location %d",i+1);
    //  }

    // }
    // if (found==-1)
    //  printf("The cum value is NOT present ");

    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (cum1[mid]!=cum))
    {
        if (cum < cum1[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (cum1[mid] == cum)
        printf("\n\nITEM found at location %d", mid+1);
    else
        printf("\n\nITEM doesn't exist");
}

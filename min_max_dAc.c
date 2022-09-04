//DAC METHOD
#include<stdio.h>
int max, min;
int count = 0;
int a[100];
void maxmin(int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
  max = min = a[i];
  count++;
 }
 else
 {
  if(i == j-1)
  {
   count++;
   if(a[i] <a[j])
   {
    count++;
    max = a[j];
    min = a[i];
   }
   else
   {
    max = a[i];
    min = a[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(i, mid);
   max1 = max; min1 = min;
   maxmin(mid+1, j);
   if(max <max1)
 {
    count++;
    max = max1;
  }
   if(min > min1){
    count++;
    min = min1;}
  }
 }
}
int main ()
{
 int i, num;
 printf ("\nEnter the total number of numbers : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (i=1;i<=num;i++)
  scanf ("%d",&a[i]);

 max = a[0];
 min = a[0];
 maxmin(1, num);
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
printf ("Total Number Of Comparisons : %d\n", count);
 return 0;
}
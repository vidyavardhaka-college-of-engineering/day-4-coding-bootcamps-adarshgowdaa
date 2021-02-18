//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[50],i,n,l,s;
  
    printf("\nEnter the number of elements :");
    scanf("%d",&n);
    printf("\nInput the array elements : ");

  for(i=0;i<n;++i)
    scanf("%d",&arr[i]);
    //Write your code here
   
    l=s=arr[0];

  for(i=1;i<n;++i)
{
  if(arr[i]>l)
    l=arr[i];

  if(arr[i]<s)
    s=arr[i];
}
    printf("\nThe smallest element is %d\n",s);
    printf("\nThe largest element is %d\n",l);

    return 0;
}

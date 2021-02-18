//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  //Declare all the variables[N, array a(1D array), i, sum=0] used in the code
  int n,a[10], i,sum=0;
  //Read the Value of array size N using scanf statement
  printf("Enter the size of Array\n");
  scanf("%d", &n);
  //Read the array elements using for loop and scanf statment
  for(int i=0;i < n;i++)
   {
      scanf("%d" , &a[i]);
   }
  // DO the addition of array elements and store the final result in variable sum
   for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
  //Print the sum of array elements which is stored in variable sum using printf statement
  printf("Sum of all elements stored in the array is : %d\n", sum);
  return 0;
 }

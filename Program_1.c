//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   int n[5];//Declare all the variables[N, array a, i] used in the code
   //Read the Value of N using scanf statement
   printf("Enter the integer\n");
   //Read the array elements using for loop and scanf statment
   for(int i=0;i < 5;i++)
   
     scanf("%d" , &n[i]);
   
   //Print the array elements in using printf statement
    for(int i=0;i < 5;i++)
   printf("%d " , n[i]);
  
   return 0; 
}

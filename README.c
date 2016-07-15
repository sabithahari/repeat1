#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int n)
{
  int i, j,count=0;
  printf(" Repeating elements are ");
  for(i = 0; i < n; i++)
  {
    for(j = i+1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        printf(" %d ", arr[i]);
        count++;
        break;
      }
    }
    if(count==1)
    {break;
    }
  }
}     
 
int main()
{
  int arr[] = {6, 2, 4, 4, 2, 3, 1};
  int a = sizeof(arr)/sizeof(arr[0]);  
  printRepeating(arr, a);
  getchar();
  return 0;
}

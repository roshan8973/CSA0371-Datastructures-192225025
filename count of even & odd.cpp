#include<stdio.h>

int main(){

   int arr[] = {1, 7, 8, 4, 5, 16, 8};
   int n = sizeof(arr)/sizeof(arr[0]);

   int even=0, odd=0;

   for(int i=0; i<n; i++){
     if(arr[i]%2==0)
       even++;

     else 
       odd++;
   }
   printf("Even Elements count : %d \nOdd Elements count : %d", even, odd);
}
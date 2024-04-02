#include <stdio.h>

int main() {
   int count = 0;
   int oddCheck[]={2,3,45,97,66,22,96};
   int total = sizeof(oddCheck)/sizeof(oddCheck[0]);
   for(int i=0;i<total;i++){
       if(oddCheck[i]%2!=0){
           count++;
       }
   }
   printf("Number of even numbers = %d",count);
    return 0;
}

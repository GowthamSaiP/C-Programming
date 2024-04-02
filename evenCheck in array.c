#include <stdio.h>

int main() {
   int count = 0;
   int evenCheck[]={2,3,45,97,66,22,96};
   int total = sizeof(evenCheck)/sizeof(evenCheck[0]);
   for(int i=0;i<total;i++){
       if(evenCheck[i]%2==0){
           count++;
       }
   }
   printf("Number of even numbers = %d",count);
    return 0;
}

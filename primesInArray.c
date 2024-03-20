#include <stdio.h>

int main() {

  int nums[] = {7,12,9,37,89,122,176,77,2};
  int len=sizeof(nums)/sizeof(nums[0]);
  int count=0;
  for(int i=0;i<len;i++){
  	for(int j=2;j<nums[i];j++){
    	if(nums[i]%j==0){
        	count++;
        }
    }
    if(count==0){
    	printf("%d is a prime number\n\n",nums[i]);
    }
    else {
    	printf("%d is not a prime number\n\n",nums[i]);
    }
    count = 0;
  }
  return 0;
}

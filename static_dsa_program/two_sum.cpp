// Two Sum Static Program
// https://leetcode.com/problems/two-sum

#include <stdio.h>

int main(){
	int nums[]={2,7,11,15};
	int target=9,i,j,num=4;
	for (i=0;i< num;i++){
		for (j=i+1;j< num;j++){
			if(nums[i]+nums[j]== target){
				printf("%d,%d",i,j);
			}
		}
	}
	return 0;
}

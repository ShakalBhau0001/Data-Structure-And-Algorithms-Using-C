// Single Number Static Program
// https://leetcode.com/problems/single-number

#include <stdio.h>

int main(){
	int nums[]={4,1,2,1,2};
	int i,num=5,result=0;
	for(i=0;i<num;i++){
		result= result ^ nums[i];
	}
	printf("Single Number Is : %d",result);
	return 0;
}

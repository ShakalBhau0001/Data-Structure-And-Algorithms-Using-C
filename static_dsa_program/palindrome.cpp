# include <stdio.h>

int main(){
    
	int num,rev=0,sum=0,rem=0;
	
	printf("Enter A Number:");
	scanf("%d",&num);
	
	rev=num;
	while(num>0){
		rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
	}
	
	if(sum==rev){
		printf("Number Is Palindrome");
	} else {
		printf("Number Is Not Palindrome");
	}
	
	return 0;
}

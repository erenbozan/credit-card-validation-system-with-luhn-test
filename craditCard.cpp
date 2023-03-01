#include <stdio.h>

int main() {
	long long number;
	int nums[16];
	int i;
	int sum=0;
	int count=0;
	printf("1. Reverse the number.\n"
			"2. Multiple every second digit by 2.\n" 
			"3. Subtract 9 from all numbers higher than 9.\n"
			"4. Add all the digits together.\n"
			"5. Modulo 10 of that sum should be equal to 0.\n");		
	scanf("%lld",&number);
	
	
	
	while(number!=0){
		
		
		nums[count]=number%10;
		number=number/10;
		count++;
	}
	
	if(count!=16){
		printf("not valid");
		return 0;
	}
	
	for(i=1;i<16;i+=2){
		
		nums[i]=nums[i]*2;
		
	}
	
	for(i=0;i<16;i++){
		if(nums[i]>9){
			nums[i]=nums[i]-9;
		}
		sum=sum+nums[i];
	}
	
	if(sum%10==0){
		printf("valid");
	}
	else{
		printf("not valid");
	}
    return 0;
}

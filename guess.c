#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int generatedNumber,enteredNumber,level;
	int max;
	const int min = 1;
	do{
		lev:printf("Levels : \n1. Very Easy\n2. Easy\n3. Normal\n4. Hard\n5. Very Hard\n6. Impossible\n\n0. Exit\t");
		scanf("%d",&level);
	}while((level < 0)||(level > 6));
	
	srand(time(NULL));
	if(level == 1){
		max = 10;
	}else if(level == 2){
		max = 100;
	}else if(level == 3){
		max = 1000;
	}else if(level == 4){
		max = 10000;
	}else if(level == 5){
		max = 100000;
	}else if(level == 6){
		max = 1000000000;
	}
	else{
		goto exit;
	}
	generatedNumber = (rand()% (max - min + 1)) + min;
	int i;
	for(i=1;i<6;i++){
		
		printf("What's the number\t ");
		scanf("%d",&enteredNumber);
		if(enteredNumber == generatedNumber){
			printf("Wow !!\n You find the generated number %d in %d tries \n",generatedNumber,i);
			goto exit;
		}else if(enteredNumber <= generatedNumber){
			printf("It's higher than %d\nRemain %d tries\n So ",enteredNumber,(5-i));
		}else{
			printf("It's lower than %d\nRemain %d tries\n So",enteredNumber,(5-i));
		}
		
	}
	if(enteredNumber != generatedNumber){
		printf("Oh you didn't guess it \nit's %d\n",generatedNumber);
	}
	int repeat;
	exit: printf("Do you want to continue? [Yes = 1/ No = 0]");
	scanf("%d",&repeat);
	while((repeat != 1)&&(repeat != 0)){
		printf("Please enter 0 or 1");
		scanf("%d",&repeat);
	}
	if(repeat == 1){
		goto lev;
	}
	return 0;
}

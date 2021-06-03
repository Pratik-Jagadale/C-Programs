#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>

//#define SUCCESS 0
//#define FAILURE 1
jmp_buf jump_buff; 

int top_levl_api(int n);
int helper1(int n);
int helper2(int n);
int helper3(int n);

int main(){
	int Arr[] = {2,32,65,-2,64,-32,6};
	int i , ret;

	ret = setjmp(jump_buff);

	if(ret == 0)
	{
		printf("jump location set\n");
	}
	else if(ret == -1)
	{
		printf("Number is Negative : %d\n", Arr[i]);
		goto next;
	}

	for(i = 0 ; Arr[i] != '\0' ;)
	{
		ret = top_levl_api(Arr[i]);
		printf("Successfull Number = %d\n",Arr[i]);
	
		next:	
		i= i + 1;
	}
	return(0);
}

int top_levl_api(int n){
	int ret;
	ret = helper1(n);
	if(ret == -1){
		return -1;
	}
	return 1;
}
int helper1(int n){
	int ret;
	ret = helper2(n);
	if(ret == -1){
		return -1;
	}
	return 1;
}
int helper2(int n){
	int ret = helper3(n);
	if(ret == -1){
		return -1;
	}
	return 1;
}
int helper3(int n){	
	if(n < 0){
		longjmp(jump_buff, -1);
	}
	return 1;
}

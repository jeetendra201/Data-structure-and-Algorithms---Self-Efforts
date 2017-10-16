#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int count_x_in_a_string(char* str, char x){
	
	if(str[0]=='\0'){
		return 0;
	}

	int res=count_x_in_a_string(str+1,x);

	if(str[0]==x)
		res++;

	return res;
}

int count_x_in_a_string(char* str, char x){
	
	if(str[0]=='\0')
		return 0;

	return ((str[0]==x) + count_x_in_a_string(str+1,x));
}


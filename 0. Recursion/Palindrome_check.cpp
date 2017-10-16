#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int check_palindrome(char* str){

	int length=0,iter=0;

	while(str[length]!='\0'){
		length++;
	}

	if(length<2){
		return 1;
	}

	length--;


	while(iter<length && str[itr]==str[length]){
		iter++;
		length--;
	}
	if(iter>=length)
		retrun 1;


	return 0;

}


int check_panlindrome_recursive(char* str,int size){
	if(size<=1)
		return 1;
	if(str[0]!=str[size-1]){
		return 0;
	}

	int r = check_panlindrome_recursive(str+1,size-2);

	return r;
}


int check_panlindrome_recursive_short(char* str,int size){
	if(size<2)
		return 1;
	
	return (str[0]!=str[size-1]  && check_panlindrome_recursive_short(str+1,size-2));
}

 
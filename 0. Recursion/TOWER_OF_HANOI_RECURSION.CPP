#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

void TowerOfHanoi(int n, char S, char D, char H){

	if(n==0)
		return;
	
	TowerOfHanoi(n-1,S,H,D);
	
	cout<< "Moved peg "<< n << " from " << S << " to " << D<<"."<<endl;

	TowerOfHanoi(n-1,H,D,S); 

	return;
}



int main(){
	int n;
	char source, dest, help;
	source='A';
	dest='B';
	help='H';
	cout<< "This is Tower of Hanoi problem with source A, destination B and helping or auxiliary H. "<<endl;
	cout<< "Enter number of pegs you want to place at source "<< endl;
	cin>> n;
	cout << "Steps to follow:"<<endl;
	TowerOfHanoi(n,source,dest,help);
	
	return 0;
}
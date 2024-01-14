/* Problem Statement:
  Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules:
    1, if the character is an uppercase alphabet (A - Z).
    0, if the character is a lowercase alphabet (a - z).
    -1, if the character is not an alphabet.
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ip;
	cin>>ip;
	int ascii_val = (int)ip;
	if(ascii_val>=65 && ascii_val<=90){
		cout<<1;
	}
	else if(ascii_val>=97 && ascii_val<=122) {
		cout<<0;
	}
	else{
		cout<<-1;
	}
	
}

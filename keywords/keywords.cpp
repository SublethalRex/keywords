// keywords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	string keywords[4] = {"hi", "hello", "no ","yes"};
	
	
	for (int word = 0; word < 3; word++) {
	
		cout << keywords[word] << endl;


	}




	cin.get();

    return 0;
}


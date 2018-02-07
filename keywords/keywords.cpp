// keywords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string keywords[4] = {"hi", "hello", "no ","yes"};
	
	
	for (int word = 0; word < 3; word++) {
	
		cout << keywords[word] << endl;


	}

	string jumble = keywords[1];
	int length = jumble.size();
	for (int i = 0; i < length; ++i) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}


	cin.get();

    return 0;
}


// IsItAWord.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>



#include <fstream>
using namespace std;


int main()
{
	string Input1 = "";
	
	cin >> Input1;
	stringToUpper(Input1);
	//njhcout << Input1;
	std::ifstream file("..\\..\\words.txt");
	std::string str;
	while (std::getline(file, str))
	{
		// Process str
		if (str == Input1) {
			cout << "Match Found!" <<"\n";
		//system("pause");
			main();
			return 0;
		
		}

	}
	

	cout << "Match Not Found ;("<<"\n";

	//system("pause");

	main();
	return 1;
}


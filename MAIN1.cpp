#include <iostream>
#include "input.h" 
using namespace std;


bool Is_Positive_Number(int Number)
{
	return Number > 0 ;
}


int main()
{
	float Number = input::Read_Float("enter number : ");
	cout << "\n\n" ;
	
	
	 Number == 0 ? cout << "Zero" : Is_Positive_Number(Number)  ? cout << "Positive " : cout << "negative " ;
	 
	 

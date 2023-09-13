#pragma once
#include "DynamicArray.h"
DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}

void main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	a.Output();
	//1
	a.ReSize(2);
	a.Output();
	//2
	a.Sort();
	a.Output();
	//3 
	int element;
	cout << "Enter the elemet which do you wan to find:\n";
	cin >> element;
	int search1 = a.Search(element);
	a.SearchRezult(search1);
	//4
	a.Reverse();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();
	b.Output();
	//1
	b.ReSize(2);
	b.Output();
	//2
	b.Sort();
	b.Output();
	//3 
	int element2;
	cout << "Enter the elemet which do you wan to find:\n";
	cin >> element2;
	int search2 = b.Search(element2);
	b.SearchRezult(search2);
	//4
	b.Reverse();
	b.Output();	


	DynamicArray rezult = GetObj();
	rezult.Output();
	//1
	rezult.ReSize(2);		
	rezult.Output();	
	//2
	rezult.Sort();
	rezult.Output();
	//3 
	int element3;	
	cout << "Enter the elemet which do you wan to find:\n";
	cin >> element3;	
	int search3 = rezult.Search(element3);
	rezult.SearchRezult(search3);		
	//4
	rezult.Reverse();
	rezult.Output();	

	system("pause");
}
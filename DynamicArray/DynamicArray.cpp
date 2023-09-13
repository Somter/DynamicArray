#include "DynamicArray.h"
#include<Windows.h>	

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S] {0};	
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor	
{	
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
void DynamicArray::ReSize(int size)
{	
	cout << "Changed array size + " << size << "\n";
	int* newPtr = new int[this->size + size]();
	for (int i = 0; i < this->size; i++) {	
		newPtr[i] = ptr[i];
	}
	delete[] ptr;	
	ptr = newPtr;
	this->size += size;	

}
void DynamicArray::Sort()
{
	cout << "Array sorting:\n";	
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (ptr[j] > ptr[j+1])	 
			{	
				int temp = ptr[j];
				ptr[j] = ptr[j+1];	
				ptr[j + 1] = temp;		
			}
			
		}
	}
}
int DynamicArray::Search(int a) const		
{
	int zero = -30;				
	for (int i = 0; i < size; i++)		
	{
		if (ptr[i] == a) 
		{
			return ptr[i];			
		}	
	}	
	return zero;			
}
void DynamicArray::SearchRezult(int elem) const
{
	if (elem != -30) 
	{
		cout << "there is such an element: " << elem << endl;	
	}
	else {
		cout << "there is no such element :/" << endl;	
	}
}

void DynamicArray::Reverse()
{
	cout << "in reverse order:\n";
	int* reversedArray = new int[size]; 	

	for (int i = 0; i < size; i++)
	{
		reversedArray[i] = ptr[size - i - 1]; 	
	}

	delete[] ptr;	
	ptr = reversedArray;	
}

DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	delete[] ptr;
}
void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{ 
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output() const
{
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i] <<"\t";
	}
	cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize() const
{
	return size;
}
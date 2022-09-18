//implementation of ReverseOrderedArrayList.hpp

#include "ReverseOrderedArrayList.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

ReverseOrderedArrayList::ReverseOrderedArrayList(int size)
{
	this->items = new int[size];
	this->length = 0;
  this->capacity = size;
}

ReverseOrderedArrayList::~ReverseOrderedArrayList()
{
	delete[] items;
}

ReverseOrderedArrayList::ReverseOrderedArrayList()
{
  this->length = 0;
  this->capacity = 1;
  this->items = new int[this->capacity];
}

void ReverseOrderedArrayList::resize(int new_size)
{
  int *new_items = new int[new_size];
  for (int i = 0; i < this->length; i++)
  {
    new_items[i] = this->items[i];
  }
  delete[] this->items;
  this->items = new_items;
  this->capacity = new_size;
}

int ReverseOrderedArrayList::size()
{
  return this->length;
}

void ReverseOrderedArrayList::add(int value)
{
  if(length + 1 == capacity) {
    resize(capacity + 1);
  }
  for (int i = length - 1; i >= 0; i--)
  {
    items[i + 1] = items[i];
  }
	items[0] = value;
	length++;
}

void ReverseOrderedArrayList::set(int reverse_index, int value)
{
  int real_index = size() - 1 - reverse_index; 

  if(real_index < 0 || real_index >= this->size()) {
    this->add(value);
    return;
  }
  this->items[real_index] = value;
}

int ReverseOrderedArrayList::elementAt(int index)
{
  int real_index = size() - 1 - index; 

  if (real_index < 0 || real_index >= size())
  {
    return 0;
  }
  return items[real_index];
}

void ReverseOrderedArrayList::printAsOrdered()
{
	for (int i = 0; i < size(); i++)
	{
		cout << items[i];
	}
	cout << endl;
}

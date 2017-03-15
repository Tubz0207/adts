#include "StackL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

int Stack::size()
{
    return num_elements;
}

void Stack::push(int o)
{
	if(top != empty)
	{
		list[top] = o;
		top++;
	}
	return -1;
}

void Stack::pop()
{
	top--;
}

int Stack::top()
{
	if (top!=0)
	{
		return

   void clear();

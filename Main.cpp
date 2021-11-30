/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Reese Stowell
 */
#include <iostream>
#include "std_lib_facilities.h"

/*

Can we declare a non-reference function argument const (e.g., void f(const int);)?
You can declare a non-reference function argument const but I dont beleive there is any good reason too.

What might that mean?
It means that the variable's value cannot be changed.

Why might we want to do that?
If you would like for the value of the variable to not change it makes some sense but the why not just have a global variable that doesnt change or just dont change the value in the function.

Why don’t people do that often?
Because it makes little sense too. The purpose of fuctions is usually to perform a task which usually invloves changing and returning a variable if you declare it as const you cant do that.
*/

void constfunc (const int num)
{
	num = 1; // When you declare it as const the variable is set and cannot be changed even in the function itself.
}
void func ( int num)
{
	num = 1; // When you declare it as non-const the variable's value to be changed throughout the function which has many uses as any programmer would know.
}

int main()
{

}

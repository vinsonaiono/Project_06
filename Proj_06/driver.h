#pragma once
/*file prologue
Name: Vinson Aiono
Course and section: CS1410-004
Instructor: Roger Debry
Assignment: Project 06 Recursion
Date: 2016-03-010
Description:

I declare that this code was written by me and was not copied unless given code examples by professor Debry.

*/
//============================

#include<iostream>
#include<string>
using namespace std;	

bool isPalindrome(const string& s);

bool isPalindromeHelper(const string& s, int start, int end);
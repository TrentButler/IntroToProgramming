#pragma once
#include <windows.h>
#include <iostream>
using namespace std;





/*
Create a program that asks for the user’s first and last name and store it in one string. It
must be able to handle spaces in the input.*/char Exercise1(){	char input;		char firstlastNam[60];	for (int i = 0; i < 60; i++)	{				cin >> input;				firstlastNam[i] = input;				cout <<firstlastNam[i];	}	return 0;}char Exercise2(){	char reverseInput;	char lastfirstNam[60];	for (int i = 0; i < 60; i--)	{		cin >> reverseInput;		lastfirstNam[i] = reverseInput;		cout << lastfirstNam[i];		}	return 0;}
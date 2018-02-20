/*
Music Player\visulizer
Team: Jeff, Garret
*/
#include<iostream>
#include<Windows.h>
#include<mmsystem.h>
#include<conio.h>

#include"Function.h";

using namespace std;

int main()
{
	char choice;
	string userInput;
	//menu
	do
	{
		choice = menu();
		switch (choice)
		{
		case '1':
			//This code will play .wav files
			PlaySound(TEXT("Dejo_Bon_-_Wheelpower_Go_.wav"), NULL, SND_SYNC);
			break;
		case'2':
			//next
			//not impllimented yet
			break;
		case'3':
			//quit
			break;
		default:
			break;
		}

	} while (choice);

	
	return 0;
}
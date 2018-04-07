/*
Music Player\visulizer
Team: Jeff, Garrett
*/
#include<iostream>
#include<string>
#include<Windows.h>
#include<list>
#include<vector>
#include<mmsystem.h>
#include<conio.h>

#include"Function.h"

using namespace std;

int main()
{
	char choice;
	string userInput;
	
	string file;
	string songName;
	vector<string> Music;
	string userSong;
	
	Playlist newPlayList;
	PlayMusic  player;
	int i = 0;

	//Music = newPlayList.getMusicList();
	do
	{	//menu
	
		choice = menu();
		switch (choice)
		{
		case '1':
			
			
			file = newPlayList.GetMuisc(i);
			//function to  display current song.
			SongName(newPlayList.GetMuisc(i));
			//This code will play .wav files
			//PlaySound(TEXT(file.c_str()), NULL, SND_ASYNC);
			player.Play(newPlayList.GetMuisc(i));
			break;

		case'2':
			//next
			PlaySound(NULL, 0, 0);
			i++;
			if (i + 1 > newPlayList.listSize())
			{
				i--;
				cout << "No more songs in list." << endl;
			}
			else 
			{
				player.Play(newPlayList.GetMuisc(i));
				SongName(newPlayList.GetMuisc(i));
				
			}
			break;
			
		case'3':
			//bug case 3 runs imideatly after case two is selected
			//back
			PlaySound(NULL, 0, 0);
			i--;
			if (i < 0)
			{
				i++;
				cout << "No more songs in list." << endl;
			}
			else
			{
				player.Play(newPlayList.GetMuisc(i));
				SongName(newPlayList.GetMuisc(i));
			}
			
			break;

		case'4':
			//stops sound
			PlaySound(NULL, 0, 0);
			//quit
			break;

		case'5':
			
			//add song
			cout << "Enter file name of song: ";
			getline(cin, userSong);
			cin.ignore();
			newPlayList.addNewSong(userSong);

			break;

		case'6':
			//quit program

			break;
		}

	} while (choice != '6');

	
	return 0;
}
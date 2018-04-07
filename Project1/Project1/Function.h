#pragma once
#include<iostream>

using namespace std;

char menu()
{
	char userChoice = 'a';
	do
	{
		cout << "Choose one from the options below." << endl << endl;
		cout << "1 - Play " << endl;
		cout << "2 - next " << endl;
		cout << "3 - back" << endl;
		cout << "4 - stop music" << endl;
		cout << "5 - add song" << endl;
		cout << "6 - Quit" << endl;
		cin >> userChoice;
		cin.ignore();

		if (userChoice != '1' && userChoice != '2' && userChoice != '3' &&  userChoice != '4' &&  userChoice != '5' &&  userChoice != '6') {
			cout << endl;
			cout << "Worng entry try again" << endl;
			system("pause");
		}

	} while (userChoice != '1' && userChoice != '2' && userChoice != '3' &&  userChoice != '4' &&  userChoice != '5' &&  userChoice != '6');

	return userChoice;
}

void SongName(string Songname)
{
	cout << endl;
	cout << Songname << endl;
	
}


 class Playlist
{
public:

	Playlist();
	~Playlist();

	string getName() 
	{
		return name;
	}
	

	string GetMuisc(int l)
	{
		return playlistMusic[l];
	}

	void addNewSong(string fileName)
	{
		playlistMusic.push_back(fileName);

		calculateSize();
	}

	int listSize()
	{
		return size;
	}

	//Work in porogress
	void NextSong()
	{
		listLocation++;
		if (listLocation + 1 > size)
		{
			listLocation--;
			cout << "No more songs in List" << endl;
		}
		else
		{

		}
	}
	
	void PreviousSong()
	{

	}

private:
	int size;
	int listLocation;
	string name;
	vector<string> playlistMusic;

	void calculateSize()
	{
		size = playlistMusic.size();
	}
};

Playlist::Playlist()
{
	//load all music to list,(temporary better solution to load music later)
	playlistMusic.push_back("Dejo_Bon_-_Wheelpower_Go_.wav");
	playlistMusic.push_back("14_Rain_Spyro_the_Dragon_.wav");
	listLocation = 0;
	calculateSize();
}

Playlist::~Playlist()
{
}

class PlayMusic
{
public:

	void Play(string filename)
	{
		PlaySound(TEXT(filename.c_str()), NULL, SND_ASYNC);
	}

	void StopMusic()
	{
		PlaySound(NULL, 0, 0);
	}

	PlayMusic();
	~PlayMusic();

private:

};

PlayMusic::PlayMusic()
{
}

PlayMusic::~PlayMusic()
{
}

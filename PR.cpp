#include <stdio.h>
#include<iostream>
#include<conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

class Photographer;
class Photo;
class Article;
class Layout;
class Editor;
class Newspaper;

class Journalist{//Журналист
	int ID;
	string FIO;
	Article *Art;
	public:
	string WriteText(string text, string Stat);
	void createArt(string Name, string Text, string theme, int day, int mon, int year);
};

class Photographer{//Фотограф
	int ID;
	string FIO;
	public:
};
class Photo {//Фото
	friend Article;
	string Name, WaySafe;
	int IDP, day, mon, year;
	Article *Art;
	public:
};
class Article{//Статья
	friend Photo;
	friend Newspaper;
	friend Journalist;
	string Name, Text, theme;
	int IDJ;
	Photo *Phot;
	public:
};
class Layout { // верстальщик
	int ID;
	public:
};

class Editor{//Редактор
	int ID;
	public:
};
class Newspaper{//Газета
	int day, month, year, number;
	string Stat;
	Article *Artic;
	public:
};

int main(){
	
	return 0;
}

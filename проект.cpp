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

class Journalist { //Журналист
		int ID;
		string FIO;
		Article *Art;
	public:
		string WriteText(string text, string Stat);
		void createArt(string Name, string Text, string theme, int day, int mon, int year);
		Journalist();
};

class Photographer { //Фотограф
		int ID;
		string FIO;
	public:
		void CreatePhoto(Article *Art, string Name, string NameWay);
		Photographer();
};
class Photo {//Фото
		friend Article;
		string Name, WaySafe;
		int IDP, day, mon, year;
		Article *Art;
	public:
		void SavePhoto(int ID, string Name);
		void AttachPhoto(Article *Art);
		Photo();
};
class Article { //Статья
		friend Photo;
		friend Newspaper;
		friend Journalist;
		string Name, Text, theme;
		int IDJ;
		Photo *Phot;
	public:
		string EditText();
		void ShowText();
		Article();
};
class Layout { // верстальщик
		friend Article;
		Article *Art;
		int ID;
	public:
		void CreateV(Article * Art, int number);
		Layout();
};

class Editor { //Редактор
		friend Newspaper;
		Newspaper * newspaper;
		int ID;
	public:
		void ApproveOnPrint(Newspaper * newspaper);
		Editor();
};
class Newspaper { //Газета
		int day, month, year, number;
		string Stat;
		Article *Artic;
	public:
		void ShowFinishVariant(Article * Art, Photo * photo);
		void PrintNewspaper();
		Newspaper();
};

int main() {
	Editor E();
	Photographer Ph();
	Layout L();
	Journalist J();
	int ID, num;
	string Name;
	Photo *P1=new Photo;
	Article *A1=new Article;
	P1->SavePhoto(ID, Name);
	A1->EditText();
	Newspaper *N1 = new Newspaper;
	L.CreateV(A1, num);
	E.ApproveOnPrint(N1);
	N1->PrintNewspaper();
	return 0;
}

string Journalist::WriteText(string text, string Stat) {

	return text;
}
void Journalist::createArt(string Name, string Text, string theme, int day, int mon, int year) {
	return;
}
void Photographer::CreatePhoto(Article *Art, string Name, string NameWay) {
	return;
}
void Photo::SavePhoto(int ID, string Name) {
	return;
}
void Photo::AttachPhoto(Article *Art) {
	return;
}
string Article::EditText() {
	string text;
	return text;
}
void Article::ShowText() {
	return;
}
void  Layout::CreateV(Article * Art, int number) {
	return;
}
void Editor::ApproveOnPrint(Newspaper * newspaper) {
	return;
}

void Newspaper::ShowFinishVariant(Article * Art, Photo * photo) {
	return;
}
void Newspaper::PrintNewspaper() {
	return;
}




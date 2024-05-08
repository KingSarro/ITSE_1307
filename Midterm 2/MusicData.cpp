/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Write a program that uses a structure called MusicData to store the following information about a Music...
-Title
-artist
-Year of Release
-Runtime in minutes

Then create 2 MusicData variables, store their values in their members,
and pass each on in a function that displays the information in about the Music in a neat format
*/
#include <iostream>
#include <string>


using namespace std;

struct MusicData{
    public:
        void SetTitle(string _title){
            title = _title;
        }
        void SetArtist(string _artist){
            artist = _artist;
        }
        void SetYear(int _year){
            year = _year;
        }
        void SetRuntime(int _runtime){
            runtime = _runtime;
        }
        void PrintMusicInfo(){
            cout << "Title: \t\t\t\t" << title << endl;
            cout << "*************************************************" << endl;
            cout << "Directed By: \t\t" << artist << endl;
            cout << "Year of Release: \t" << year << endl;
            cout << "Music Run Time: \t" << runtime << " minutes" << endl;
            cout << endl << endl;
        }
    private:
        string title;
        string artist;
        int year;
        int runtime;
};

int main(){
    MusicData Music1;
    MusicData Music2;

    Music1.SetTitle("Idol");
    Music1.SetArtist("Yaosobi");
    Music1.SetYear(2023);
    Music1.SetRuntime(4);
    Music1.PrintMusicInfo();

    Music2.SetTitle("Empty Mind");
    Music2.SetArtist("Tony22");
    Music2.SetYear(2024);
    Music2.SetRuntime(2);
    Music2.PrintMusicInfo();

    return 0;
}
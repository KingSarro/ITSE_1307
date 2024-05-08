/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Write a program that uses a structure called MovieData to store the following information about a movie...
-Title
-Director
-Year of Release
-Runtime in minutes

Then create 2 MovieData variables, store their values in their members,
and pass each on in a function that displays the information in about the movie in a neat format
*/
#include <iostream>
#include <string>


using namespace std;

class MovieData{
    public:
        void SetTitle(string _title){
            title = _title;
        }
        void SetDirector(string _director){
            director = _director;
        }
        void SetYear(int _year){
            year = _year;
        }
        void SetRuntime(int _runtime){
            runtime = _runtime;
        }
        void PrintMovieInfo(){
            cout << "Title: \t\t\t\t" << title << endl;
            cout << "*************************************************" << endl;
            cout << "Directed By: \t\t" << director << endl;
            cout << "Year of Release: \t" << year << endl;
            cout << "Movie Run Time: \t" << runtime << " minutes" << endl;
            cout << endl << endl;
        }
    private:
        string title;
        string director;
        int year;
        int runtime;
};

int main(){
    MovieData movie1;
    MovieData movie2;

    movie1.SetTitle("Now You See Me");
    movie1.SetDirector("Louis Leterrier");
    movie1.SetYear(2013);
    movie1.SetRuntime(115);
    movie1.PrintMovieInfo();

    movie2.SetTitle("Patema Inverted");
    movie2.SetDirector("Yasuhiro Yoshiura");
    movie2.SetYear(2013);
    movie2.SetRuntime(98);
    movie2.PrintMovieInfo();

    return 0;
}
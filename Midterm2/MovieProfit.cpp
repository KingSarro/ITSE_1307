/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Modify the MovieData program to include two new members:
-Production cost
First year's revenue

Then, modify the display function to show the the first year's profit/loss
*/
#include <iostream>
#include <string>
#include <iomanip> //Includes iomanip for the setprecision method

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
        //!*****************************************************************
        void SetProductionCost(double _Cost){
            productionCost = _Cost;
        }
        void SetFirstYearRevenue(double _revenue){
            firstYearRevenue = _revenue;
        }
        //!*****************************************************************
        void PrintMovieInfo(){
            cout << "Title: \t\t\t\t" << title << endl;
            cout << "*******************************************************" << endl;
            cout << "Directed By: \t\t\t" << director << endl;
            cout << "Year of Release: \t\t" << year << endl;
            cout << "Movie Run Time: \t\t" << runtime << " minutes" << endl;
            //!*****************************************************************
            double profitAmount = firstYearRevenue - productionCost;
            cout << fixed << setprecision(2);
            cout << "First Year Profit/Loss: \t$" << profitAmount << endl;
            //!*****************************************************************
            cout << endl << endl;
        }
    private:
        string title;
        string director;
        int year;
        int runtime;
        double productionCost;
        double firstYearRevenue;
};

int main(){
    MovieData movie1;
    MovieData movie2;

    movie1.SetTitle("Now You See Me");
    movie1.SetDirector("Louis Leterrier");
    movie1.SetYear(2013);
    movie1.SetRuntime(115);
    //!*****************************************************************
    movie1.SetProductionCost(120000000);
    movie1.SetFirstYearRevenue(100000000);
    //!***********************************************
    //!*****************************************************************
    movie1.PrintMovieInfo();

    movie2.SetTitle("Patema Inverted");
    movie2.SetDirector("Yasuhiro Yoshiura");
    movie2.SetYear(2013);
    movie2.SetRuntime(98);
    //!*****************************************************************
    movie2.SetProductionCost(100000000);
    movie2.SetFirstYearRevenue(80000000);
    //!*****************************************************************
    movie2.PrintMovieInfo();

    return 0;
}
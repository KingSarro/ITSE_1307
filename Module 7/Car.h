#ifndef Car_H //Checks if Car_H has already been defined in this file or not
#define Car_H //
#include <string>

using namespace std;

class Car{
    public:
        Car(int yearModel, string make);
        void SetYearModel(int year);
        int GetYearModel() const;
        void SetMake(string make);
        string GetMake() const;
        void SetSpeed(int speed);
        int GetSpeed() const;
        void Accelerate();
        void Brake();
    private:
        int yearModel;
        string make;
        int speed;
};

#endif
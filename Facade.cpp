#include <iostream>
using namespace std;
#include "SubSystems.h"

class CinemaFacade 
{
private:
    
    Projector _projector;
    SoundSysytem _sound;
    DvdPlayer _dvd;
    Screen _screen;
    string _title;


public:

    void SetMovie(const string title)
    {
        this->_title = title;
    }

    void WatchMovie() 
    {
        cout << "U watching movie \"" << _title << "\" " << endl;
        _projector.On();
        _sound.On();
        _dvd.On();
        _screen.On();
    }

    void EndMovie()
    {
        cout << "Thanks for watching!" << endl;
        _projector.Off();
        _sound.Off();
        _dvd.Off();
        _screen.Off();
    }
};

int main()
{
    CinemaFacade cinema;
    cinema.SetMovie("Doctor Who");
    cinema.WatchMovie();
    cout << endl;
    cinema.EndMovie();
}
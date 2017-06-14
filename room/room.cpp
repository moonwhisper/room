#include "room.h"
#include <iostream>

using namespace std;
int room::_total_rooms=0;
int museum::_total_museum_rooms=0;

room::room(bool light,bool desk,bool books)
{
    _light=light;
    _desk=desk;
    _books=books;

    _total_rooms++;
}
bool room::getLight()
{
    return _light;
}

bool room::getDesk()
{
    return _desk;
}

bool room::getBooks()
{
    return _books;
}

void room::show()
{
    cout<<"the light is: "<<_light<<endl;
    cout<<"the desk is: "<<_desk<<endl;
    cout<<"the books is:"<<_books<<endl;

    cout<<"there is "<<room::_total_rooms<<" rooms"<<endl;
}


void museum::show()
{
    cout<<"the light is: "<<getLight()<<endl;
    cout<<"the desk is: "<<getDesk()<<endl;
    cout<<"the books is: "<<getBooks()<<endl;
    cout<<"the painting is: "<<_painting<<endl;
    cout<<"the fossil is: "<<_fossil<<endl;

    cout<<"there is "<<room::_total_rooms<<" rooms"<<endl;
    cout<<"there is "<<_total_museum_rooms<<" museum rooms"<<endl;
}

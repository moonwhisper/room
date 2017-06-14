class room
{
private:
    bool _light;
    bool _desk;
    bool _books;

public:
    static int _total_rooms;

    room(bool light=false,bool desk=false,bool books=false);
    bool getLight();
    bool getDesk();
    bool getBooks();
    void show();
    ~room(){}
};

class museum : public room
{
private:
    bool _painting;
    bool _fossil;

    static int _total_museum_rooms;

public:
    museum(bool light,bool desk,bool books,bool painting,bool fossil) : room(light,desk,books),_painting(painting),_fossil(fossil){_total_museum_rooms++;}


    void show();

    ~museum(){}
} ;



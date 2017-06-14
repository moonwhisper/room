#include <iostream>
#include "room.h"

using namespace std;

int main()
{

    room A;

    A.show();

    room B(1,true,true);

    B.show();

    museum C(1,1,1,0,0);

    C.show();

    cout << "Hello world!" << endl;
    return 0;
}

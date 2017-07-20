
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void srand(unsigned int t);

struct Space_ship
{
    int x_co_ordinate;
    int y_co_ordinate;
};

Space_ship Get_new_ship(Space_ship ship);
Space_ship Update_space_ship(Space_ship ship);

int rand_range(int low, int high);

int main() {   
    srand(time(NULL));
    Space_ship ship[5];
    for(int i = 0; i < 5; i++) {
        ship[i] = Get_new_ship(ship[i]);
    }
    while(1) {
        for(int i = 0; i < 5; i++) {
            ship[i] = Update_space_ship(ship[i]);
        }
        for(int i = 0; i < 5; i++) {
           if(ship[i].x_co_ordinate < 1024 && ship[i].y_co_ordinate < 768) {
                cout<<"ship "<< i + 1 << " : " << "x = " << ship[i].x_co_ordinate << "     ,     " << "y = " << ship[i].y_co_ordinate << endl << endl;
            }
            else {
                cout<<"ship "<<i+1<<" is out of scope "<<endl<<endl;
                ship[i] = Get_new_ship(ship[i]);
            }
        }
        for(int i = 0; i < 50000000; i++) {
                ; // do nothing
        }
    }
    return 0;
}

int rand_range(int low, int high)
{
    int num ;
    while(1) {
        num = rand();
        if (num >= low && num <= high) {
            return num;
        }
    }
}

Space_ship Get_new_ship(Space_ship ship) {
    ship.x_co_ordinate = rand_range(0 ,1024);
    ship.y_co_ordinate = rand_range(0 ,768);
    return ship;
}

Space_ship Update_space_ship(Space_ship ship) {
    ship.x_co_ordinate += 100;
    ship.y_co_ordinate += 78;
    return ship;
}
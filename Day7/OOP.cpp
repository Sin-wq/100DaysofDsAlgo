#include <iostream>
using namespace std;
class Hero
{
    // properties
public:
    int health;
    char level;

    void print()
    {
        cout << level << endl;
    }
};

int main()
{
    // creation of Object
    Hero me;
    me.health = 70;
    me.level = 'A';
    
    cout << "health is: " << me.health << endl;
    cout << "Level is: " << me.level << endl;

}
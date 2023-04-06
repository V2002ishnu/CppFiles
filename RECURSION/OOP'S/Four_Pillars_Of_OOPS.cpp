#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    string name;
    char level;


    void sethealth(int health){
        this->health=health;
    }

    int gethealth(){
        return health;
    }
};

class weapon : public Hero{
        public:
        int value;
};


int main(){
    Hero rohit;

    weapon chakra;

    chakra.sethealth(50);

    cout<<chakra.gethealth()<<endl;


    cout<<"okokokokok"<<endl;
}
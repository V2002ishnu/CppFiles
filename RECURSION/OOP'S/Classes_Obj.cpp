#include<bits/stdc++.h>
using namespace std;

// creating class 

class Hero{
    // properties
    private :

    int health;

    public :

    char level;


    int getHealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
       health=h;
    }

    void setlevel(char ch){
        level=ch;
    }

    // creation of constructor......
    // Hero(){
    //     cout<<"hello ji"<<endl;
    // }
    // Parameterised Constructor.............

    // Hero(int health){
    //     this->health=health;
    // }


    // Hero(int health, char ch){
    //     this->health=health;
    //     this->level=ch;
    // }


    // Copy Constructor


};


int main(){

    Hero ramesh;
    // cout<<"adress is :"<<&ramesh<<endl;
    cout<<endl;
    cout<<"Health is :"<<ramesh.getHealth()<<endl;
    cout<<"level is :"<<ramesh.getlevel()<<endl;

    Hero Vishnu(ramesh);

    // Vishnu.setlevel('D');
    ramesh.setlevel('M');

    cout<<endl; 

    cout<<"level is :"<<ramesh.getlevel()<<endl;
    cout<<"level is :"<<Vishnu.getlevel()<<endl;

    // cout<<"size is :"<<sizeof(Hero)<<endl;
    // cout<<"Health is :"<<ramesh.health<<endl;

    // Concept of Getter/Setter..................

    // ramesh.setHealth(70);
    // ramesh.setlevel('A');
    // cout<<"Health is :"<<ramesh.getHealth()<<endl;
    // cout<<"level is :"<<ramesh.getlevel()<<endl;
    
    // ..........
    // Concept of Padding and Greedy Alignment..........................

    // cout<<"Size is :"<<sizeof(ramesh)<<endl;

    // ..............

    // DYNAMIC MEMORY ALLOCATION.............

    // Hero *p=new Hero;

    // p->setHealth(100);
    // p->setlevel('C');

    //  cout<<"Health is :"<<p->getHealth()<<endl;
    // cout<<"level is :"<<p->getlevel()<<endl;

    // cout<<"size Of :"<<sizeof(p)<<endl;
    
    // ...........................


    // Conceot of Constructor.............



    
    
    
    
    
    
    return 0;
}
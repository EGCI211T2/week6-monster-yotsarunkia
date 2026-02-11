#ifndef monster_h
#define monster_h

class monster{
private:
    string name;
    int hp,pot;
public:
    void Attack(monster &);
    void heal();
    void display();
    monster(string, int,int);
    ~monster();
};
void monster::display()
{
    cout<<name<<endl;
    cout<<"Health : "<<hp<<endl;
    cout<<"Potions : "<<pot<<endl;
    
}

monster::monster(string n="anonymous", int h=1, int p=1){
    name=n;
    hp=h;
    pot=p;
    cout<<"A wild "<<name<<" appears!"<<endl;
}

monster::~monster(){
    cout<<name<<" is deleted."<<endl;
	
}
#endif
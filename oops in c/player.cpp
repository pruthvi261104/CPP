#include<iostream>
using namespace std;
class Player
{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public:
    //getter
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }
    //setter
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age;
    }
    void setscore(int score){
         this->score;
    }
    void setisalive(bool alive){
        this->alive;
    }
};
int main()
{
    Player pruthvi;
    Player raju;
    pruthvi.sethealth(90);
    pruthvi.setage(45);
    pruthvi.setscore(60);
    pruthvi.setisalive(true);
    cout<<endl;
    raju.sethealth(90);
    raju.setage(45);
    raju.setscore(60);
    raju.setisalive(true);
}
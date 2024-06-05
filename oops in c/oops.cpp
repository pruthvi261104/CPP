#include<iostream>
class Student{//class
    public:
    int score=50;
    int health=60;
    int roll =30;
    int fees=25;
    char address[50];
};
using namespace std;
int main()
{
    Student raju;//object
    raju.score=50;
    raju.health=50;
    raju.roll=50;
    raju.fees=25;
    cout<<"raju score:"<<raju.score;
    cout<<endl;
    cout<<"raju health:"<<raju.health;
    cout<<endl;
    cout<<"raju roll no:"<<raju.roll;
    cout<<endl;
    cout<<"raju fees:"<<raju.fees;
    cout<<endl;
    Student pruthvi;
    pruthvi.score=50;
    pruthvi.health=50;
    pruthvi.roll=50;
    pruthvi.fees=25;
    cout<<"pruthvi score:"<<pruthvi.score;
    cout<<endl;
    cout<<"pruthvi health:"<<pruthvi.health;
    cout<<endl;
    cout<<"pruthvi roll no:"<<pruthvi.roll;
    cout<<endl;
    cout<<"pruthvi fees:"<<pruthvi.fees;


}
#include <iostream>
#include <string.h>
using namespace std;
class Student{
public:
 int roll;
 string name;
 string sport;
 string food;
 Student(int roll,string name,string sport,string food){
  this->roll=roll;
  this->name=name;
  this->sport=sport;
  this->food=food;
 }
};
int main(){
  Student s(1,"akjsak","dkskjds","ksjdksj");
  Student*ptr=&s;
  cout<<s.name<<endl;
  //with using dereferncing operator
  // (*ptr).name="raju";
  //without dereferncing operator
  ptr->name="pruthvi";
  cout<<s.name<<endl;
  
}
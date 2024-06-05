#include<iostream>
#include<string>
using namespace std;
//using 4 variables
int maze(int startr,int startc,int endr,int endc){
 if(startr>endr || startc>endc) return 0;
 if(startr==endr && startc==endc) return 1;
 int Right=maze(startr,startc+1,endr,endc);
 int Down=maze(startr+1,startc,endr,endc);
 int total= Right+ Down;
 return total;
}
//using 2 variables
int maze2(int r,int c){
  if(r<1 || c<1) return 0;
 if(r==1 && c==1) return 1;
 int Right=maze2(r,c-1);
 int Down=maze2(r-1,c);
 int total= Right+ Down;
 return total;
}
//display using 4 variables
void display(int startr,int startc,int endr,int endc,string s){
  if(startr>endr || startc>endc) return;
 if(startr==endr && startc==endc){
       cout<<s<<endl;
       return;
 }
 display(startr,startc+1,endr,endc,s+'R');
 display(startr+1,startc,endr,endc,s+'D');
}
//display using 2 variables
void display2(int r,int c,string s){
  if(r<1 || c<1) return;
 if(r==1 && c==1){
       cout<<s<<endl;
       return;
 }
 display2(c-1,r,s+'R');
 display2(r-1,c,s+'D');
}

int main(){
  //  display(1,1,3,3," ");
  // cout<<maze2(3,4);
  display2(3,3," ");
}
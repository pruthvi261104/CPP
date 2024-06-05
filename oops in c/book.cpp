//book
#include<iostream>
using namespace std;
class Book{
    public:
    char name;
    int price;
    int pages;
    int countBooks(int p)
    {
        if(price<=p)
        return 1;
        else
        return 0;
    }
    int isBookPresent(char book)
    {
        if(name==book)
        return true;
        else
        return false;
    }
};
int main()
{
    Book aow;
    aow.name='A';
    aow.price=30;
    aow.pages=50;
    cout<<aow.countBooks(30)<<endl;
    cout<<aow.isBookPresent('A');
}
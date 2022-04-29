#include<iostream>
using namespace std;
class Square{
public:
    int ar,side,p;
    void area(int side){
        ar=side*side;
        cout<<"Area is "<<ar<<endl;
    }
    void peri(int side){
        p=4*side;
        cout<<"Perimeter is "<<p<<endl;
    }
};
int main()
{
    Square obj;
    obj.area(5);
    obj.peri(6);
    return 0;
};
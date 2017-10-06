#include <iostream>

using namespace std;

int main()
{
    double i=13;
    double j=20;
    double*wsk1;
    double*wsk2;
    double a=0;
    wsk1=&i;
    wsk2=&j;
    cout<<"Zmienna a ma wartosc "<<a<<endl;
    a=*wsk1+*wsk2;
    cout<<"Teraz a ma wartosc "<<a<<endl;
    cout<<"Zmienna i ma wartosc "<<i<<endl;
    *wsk1=*wsk1+3;
    cout<<i<<endl;
    cout<<j<<endl;
    *wsk2=*wsk1;
    cout<<j<<endl;
    return 0;
}

#include <iostream>

using namespace std;

class Samochod{
    public:

string marka,model;
int rocznik,przebieg;
void wczytaj(){
cout <<"-----------Dodawanie samochodów do bazy dannych------------"<<endl;
cout <<"Podaj marke: "<<endl;
cin>>marka;
cout <<"Podaj model: "<<endl;
cin >>model;
cout <<"Podaj rocznik: "<<endl;
cin >>rocznik;
cout << "Podaj przebieg: "<<endl;
cin>>przebieg;

}
void wypisz(){
cout << "Dodane do bazy danych samochody to: "<<endl;
cout <<marka<<endl<<model<<endl<<rocznik<<endl<<przebieg;
}
};
int main()
{
    Samochod polo;
    Samochod fabia;
    fabia.wczytaj();
    polo.wczytaj();
    polo.wypisz();
    cout <<""<<endl;
    fabia.wypisz();

    return 0;
}

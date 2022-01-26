#include <iostream>
#include <fstream>

using namespace std;

int pilih;
char kembali;
struct matkul{
  string kd;
  string nama;
};

void insert()
{
    matkul mtk;
    ofstream txt;
    txt.open("soalganjil.txt",ios::app);
    cout << "enter name data: ";
    cin >> mtk.kd;
    txt << mtk.kd;
    txt << ",";
    cout << "enter name data: ";
    cin >> mtk.nama;
    txt << mtk.nama;
    txt << "\n";
}

void view(){
    string getdata;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, getdata);
            cout << getdata << endl;
        }
    }
}

int main(){
    do{
        cout<<"MENU";
        cout<<"\n 0. Exit";
        cout<<"\n 1. Create";
        cout<<"\n 2. Read";
        cout<<"\nPilih : ";
        cin>>pilih;
        switch(pilih){
            case 0:
            cout<<"\nThanks"<<endl;
            return 0;
            case 1:
            insert();
            break;
            case 2:
            cout<<"LIST DATA\n";
            view();
            break;
            default:
            cout<<"Pilihan Salah"<<endl;
            break;
        }
        cout<<"Ingin memilih menu lain (y/t)? ";
        cin>>kembali;
        cout<<endl;
    }
while (kembali!= 't');
cout<<"Thanks"<<endl;
return 0;
}
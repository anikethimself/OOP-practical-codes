#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int roll;
        int classs;
        char divi;
        string dob;
        string bgroup;
        string add;
        string tele;
        string divlic;
    public:
        void getdata(){
            cout<<"Enter the student name:";
            getline(cin, name);
            cout<<"Enter the roll no:";
            cin>>roll;
            cin.ignore();
            cout<<"Enter the class:";
            cin>>classs;
            cout<<"Enter the division:";
            cin>>divi;
            cout<<"Enter the date of birth :(dd/mm/yyyy) :";
            getline(cin,dob);
            cout<<"Enter the blood group:";
            getline(cin,bgroup);
            cout<<"Enter the telephone no.:";
            cin>>tele;
            cout<<"Enter the driving liscence no:";
            cin>>divlic;
            cout<<""<<endl;
        }
        void print(){
            cout<<"Student details\n"<<endl;
            cout<<"Student name:"<<name<<endl;
            cout<<"Roll no.:"<<roll<<endl;
            cout<<"class:"<<classs<<endl;
            cout<<"Division:"<<divi<<endl;
            cout<<"Date of birth:"<<dob<<endl;
            cout<<"Blood group:"<<bgroup<<endl;
            cout<<"Telephone no:"<<tele<<endl;
            cout<<"Driving liscence no:"<<divlic<<endl;
        }
    
};
int main(){
    student s1;
    s1.getdata();
    s1.print();
    return 0;
}

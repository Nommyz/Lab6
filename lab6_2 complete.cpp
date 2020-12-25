#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,c,d,e,num1;
    long int b;
	cout << "Fahsai: Sawadee ka...Can you tell me your name? "<< "\n";
    cout << "?????: ";
    getline(cin,a);
    cout << "Fahsai: Wow!!! " << a << " " <<  "is a really cool name."<< "\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
    cout << a <<": ";
    cin >> b;
    cin.ignore();
    	b= b/10000000;
    	b= b-12;
    cout << "Fahsai: I think you may be GEAR " <<  b <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << a << ": " ;
    getline(cin,c);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << a << ": ";
    getline(cin,d);
    cout << "Fahsai: "<< d <<"....that is OK!!! I'm looking forward to watching " << c <<" with you.\n";
    cout << a << ": ";
    getline(cin,e);
    cout << "Fahsai: 555+ see you " << d <<". Bye Bye \\(^ ^)/";
    
    
    
}

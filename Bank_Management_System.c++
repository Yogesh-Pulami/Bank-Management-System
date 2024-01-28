#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Bank{
private:
string name,address,email,phone_num;
// string email;
public:
void create_account();
};
void Bank:: create_account(){
  cin.ignore();
  cout<<"\nEnter Your Name : ";
  getline(cin,name);
  cout<<"\nEnter Your Phone Number : ";
  // cin>>phone_num;
  getline(cin,phone_num);
//  cin.ignore();
  cout<<"\nEnter Your Address(eg:Dang) :";
  getline(cin,address);
  cout<<"\nEnter Your Email id : ";
  getline(cin,email);
  cout<<endl<<endl;
 cout<<"--------------------------------"<<endl;
  cout<<"Account Created Successfully...";
   cout<<endl<<"--------------------------------"<<endl;
  //writing the data in file
  ofstream writing("User_Data.txt", ios::app);
  writing<<name<<"  "<<phone_num<<"  "<<address<<"  "<<email<<endl;
  writing.close();
}

int main(){
  Bank bank;
  int choice;
  cout<<endl;
  cout<<"WELCOME TO NIUBI Bank!";
  cout<<endl<<endl;
cout<<"1) Create Account : "<<endl;
  cout<<"2) Deposit Money : "<<endl;
  cout<<"3) Withdraw Money : "<<endl;
  cout<<"4) Balance Enquiry : "<<endl;
  cout<<"5) Delete Account : "<<endl;
  cout<<"What would you like to do : ";
  cin>>choice;
  switch(choice){
    case 1:
    bank.create_account();
    break;
    case 2:
      cout<<"\n\tProject is in development phase...";
    break;
    case 3:
      cout<<"\n\tProject is in development phase...";
    break;
    case 4:
      cout<<"\n\tProject is in development phase...";
    break;
    case 5:
      cout<<"\n\tProject is in development phase...";
    break;
    default:
    cout<<"\nInvalid Input. Please enter a number between 1 to 5";
    break;
  }
  return 0;
}
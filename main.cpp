//Authors: Ali Alshaikh
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string name, lastname;
  

  //get user input
  cout<<"What is your first name?"<<endl;
cin>>name;
cout<<"What is your last name?"<<endl;
cin>>lastname;
  //tell fortune 
string nickname = "";
nickname.push_back(name[0]);
nickname.push_back('.');
nickname.push_back(lastname[0]);
nickname.push_back('.');
cout<<"Welcome, "<<nickname<<", here is your fortune..."<<endl;
int lucky;
lucky = name.length();
cout<<"your lucky number is: "<<lucky<<endl;

if ((name[0] == 'a') || (name[0] == 'e') || (name[0] == 'i') || (name[0] == 'o')|| (name[0] == 'u') || (name[0] == 'A') || (name[0] == 'E') || (name[0] == 'I') || (name[0] =='O') || (name[0] == 'U'))
{
cout<<"you are destined to be famous!"<<endl;
}

int len = lastname.length();
if ((lastname[len - 1] == 'a') || (lastname[len - 1] == 'e') || (lastname[len - 1] == 'i') || (lastname[len - 1] == 'o') || (lastname[len - 1] == 'u') || (lastname[len - 1] == 'A') || (lastname[len - 1] == 'E') || (lastname[len - 1] == 'I') || (lastname[len - 1] == 'O') || (lastname[len - 1] == 'U'))
{
cout<<"you have already met your true love."<<endl;
}
else 
{
cout<<"you should keep a low profile."<<endl;
}
cout<<"have a good day!"<<endl
  return 0;
}

//Authors: Ali Alshaikh
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string name, lastname;
  

  //get user input
  cout<<"please enter your first and last name: ";
cin>>name>> lastname;

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
if ((name[0] == 'a') || (name[0] == 'e') || (name[0] == 'i') || (name[0] == 'o')|| (name[0] == 'u')|| (name[0] == 'A') || (name[0] == 'E') || (name[0] == 'I') || (name[0] =='O') || (name[0] == 'U'))
{
cout<<"you are destined to be famous! \nyou have already met your true love. \nhave a good day!"<<endl;
}

else 
{
cout<<"you should keep a low profile \n have a good day!"<<endl;
}
  return 0;
}

// Emmanuel Isidahomen
// 4/16/2018

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
ifstream PublisherName;
ifstream TeachName;
ifstream BooksNames;
int c = 1;
string Buff;
struct Line
{
string PRNum;
string LName;
string BN;
string MC;
string CR;
string Sem;
}Classes[100];
//-----------------------------------------------------------------------------------------
struct Line1{
string Name;
string Address;
string Number;
}Publisher[100];
//---------------------------------------------------------------------------------------------
struct Line2
{
string BookNumber;
string PubNum;
string BookTitle;
}Book[100];
//------------------------------------------------------------------------------------------
PublisherName.open("IN-PUB.DAT");
TeachName.open("IN-PREQ.DAT");
BooksNames.open("IN-BOOK.DAT");
if (!PublisherName)
{
cout << "Error file can not be found " << endl; //Opens file to read
data
cout << "Pub Name" << endl;
cin.get();
return 1;
}
if (!TeachName)
{
cout << "Error file can not be found " << endl; //Opens file to read
data
cout << "Teacher Name" << endl;
cin.get();
return 1;
}
if (!BooksNames)
{
cout << "Error file can not be found " << endl; //Opens file to read
datacout << "BookName" << endl;
cin.get();
return 1;
}
else
{
while (TeachName)
{
for (c; c <= 100; c++)
{
getline(TeachName, Buff);
Classes[c].PRNum = Buff.substr(0, 4);
cout << Classes[c].PRNum << endl;
Classes[c].LName = Buff.substr(4, 20);
cout << Classes[c].LName << endl;
Classes[c].BN = Buff.substr(24, 5);
cout << Classes[c].BN << endl;
Classes[c].MC = Buff.substr(29, 5);
cout << Classes[c].MC << endl;
Classes[c].CR = Buff.substr(34, 3);
cout << Classes[c].CR << endl;
Classes[c].Sem = Buff.substr(37, 1);
cout << Classes[c].Sem << endl;
}
}
int j = 1;
while (PublisherName)
{
for (j; j <= 100; c++)
{
getline(PublisherName, Buff);
Publisher[j].Number = Buff.substr(0, 4);
cout << Publisher[j].Number << endl;
Publisher[j].Name = Buff.substr(4, 20);
cout << Publisher[j].Name << endl;
Publisher[j].Address = Buff.substr(24, 40);
cout << Publisher[j].Address << endl;
}
}
int m = 1;while (BooksNames)
{
for (m; m <= 100; m++)
{
getline(BooksNames, Buff);
Book[m].BookNumber = Buff.substr(0, 4);
cout << Book[m].BookNumber << endl;
Book[m].PubNum = Buff.substr(4, 4);
cout << Book[m].PubNum << endl;
Book[m].BookTitle = Buff.substr(8, 30);
cout << Book[m].BookTitle << endl;
}
}
char semster;
cout << "Would you like to display semster 1 or 2 ?" << endl;
cout << "Please enter the number 1 or 2." << endl;
cin >> semster;
while (semster != 1 || semster != 2)
{
cout << "Please enter the number 1 or 2." << endl;
cin >> semster;
}
if (semster == 1)
{
for (int r; r > 100; r++)
{
cout << Publisher[r].Name << endl;
for (int y; y > 50; y++)
{
if ((Classes[r].PRNum == Book[y].PubNum) &
(Classes[r].BN == Book[y].BookNumber))
{
cout << Book[m].BookTitle << endl;
cout << "Number of Copies Needed" <<
Classes[c].CR << endl;
}
}}
PublisherName.close();
TeachName.close();
BooksNames.close();
system("pause");
}
return 0;

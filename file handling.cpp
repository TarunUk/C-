#include<iostream>
#include<fstream>
using namespace std;
class student
{
	char name[30];
	int roll_no;
	float marks;
public:
	void getdata()
	{
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter rollno: ";
		cin>>roll_no;
		cout<<"enter marks: ";
		cin>>marks;
	}
void putdata()
	{
	cout<<name<<endl;
	cout<<roll_no<<endl;
	cout<<marks<<endl;
	}
};
int main()
{
	student ob1,ob2;
	ob1.getdata();
	fstream file;
	file.open("data",ios::in|ios::out|ios::trunc);
	file.write((char*)&ob1,sizeof(ob1));
	
	file.seekg(0);
	file.read((char*)&ob2,sizeof(ob2));
	
	ob2.putdata();
}



#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class report
{
	int date,month,year;
	long admNo;
	char res[50]; //reason for coming
	public:
		void inputData();
		void displayData();
		long getAdmno()
		{
			return(admNo);
		}
		void getDate(int &d, int &m, int &y)
		{
			d=date;
			m=month;
			y=year;
		}

}rep;

class checkUp
{
	long admNo;
	int height,weight,date,month,year;
	//char sight[30],ears[30],throat[30],tonsils[30],nails[30];
	//char hygiene[30],teeth[30],remarks[100];
	char data[7][50];
	public:
		void inputData();
		void displayData();
		int getAdmno()
		{
			return(admNo);
		}

}c;

class student
{
	long admno;
	//order-> sname,mname,fname,addr,fno,mno,bgp;
	//char sName[50],mName[50],fName[50],addr[50],fNo[10],mNo[10],bGp[3];

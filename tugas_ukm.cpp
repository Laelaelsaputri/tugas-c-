#include <iostream>
using namespace std;
int main ()
{
    
	int uts,uas,quis,tugas,projcet,rata_rata;
	cout <<"Masukkan nilai uts: ";
	cin >>uts;
	cout <<"Masukkan nilai uas: ";
	cin >>uas;
	cout <<"Masukkan nilai quis: ";
	cin >>quis;
    cout <<"Masukkan nilai tugas: ";
	cin >>tugas;
	cout <<"Masukkan nilai projcet: ";
	cin >>projcet;
	rata_rata = (uts+uas+quis+tugas+projcet)/6; 
	cout <<"nilai rata rata = "<< rata_rata <<endl;
	if (rata_rata >=0 && rata_rata <=30)
	{
		cout <<"Grade = E"<<endl;
	}
	else if (rata_rata >=31 && rata_rata <= 40)
	{
    	cout <<"Grade = D"<<endl;
	}
	else if (rata_rata >=41 && rata_rata <= 50)
	{
    	cout <<"Grade = C"<<endl;
	}
	else if (rata_rata >= 51 && rata_rata <=60)
	{
    	cout <<"Grade = B"<<endl;
	}
	else if (rata_rata >=61 && rata_rata <=70)
	{
    	cout <<"Grade = B+"<<endl;
	}
	else if (rata_rata >=71 && rata_rata <=80)
	{
    	cout <<"Grade = A"<<endl;
	}
	else if (rata_rata >=91 && rata_rata <=100)
	{
    	cout << "Grade = A+"<<endl;
	}
	else
	{
    	cout <<" tidak lulus"<<endl;
	}
}

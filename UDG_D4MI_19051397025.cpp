#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char kata[35];
	int a, i;
	int belakang;
	bool palindrome = true;
	string c;

	cout <<"Masukkan kalimat : ";
	cin >> kata;
	cout << "Jumlah huruf : ";
	a = strlen(kata);
	cout << a << endl;
	cout << "Kalimat asli : " << kata << endl;
	cout <<"Kalimat setelah dibalik : ";
	for (i=a;i>=1; i--)
	{
		char c = kata[i-1];
		cout << c;
	}
	cout << endl << endl;
	int panjang = strlen(kata);
	belakang = panjang-1;
	for(int a=0; a<panjang; a++)
    {

        if((char)tolower(kata[a])!=(char)tolower(kata[belakang]))
            {
                 palindrome = false;
                 break;
            }
        belakang--;
    }

    if(palindrome)
    {
        cout<<"Palindrom";
    }
    else
    {
        cout<<"Bukan Palindrom";
    }
	return 0;
}


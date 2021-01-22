#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
#include<MMSystem.h>
#include <stdlib.h>
using namespace std;

int acilis()
{
	PlaySound(TEXT("music.wav"), NULL, SND_FILENAME | SND_ASYNC);
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << " \t\t\t Latifli Mehraj                                   Baku - 2020 " << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t\t      | M | I | L | Y | O | N | C | U | " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << " \t\t\t Step Academy                               Qrup: FBE_2914_AZ " << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	while (true) {
		system("color 7");
		Sleep(1000);
		system("color 9");
		Sleep(1000);
		system("color 7");
		Sleep(1000);
		system("color 9");
		Sleep(1000);
		break;
	}
	return 0;
}

int qeydiyyat(int yas, string ad, string cins, int qayda)
{
	char symbol1 = 'K';
	char symbol2 = 'i';
	char symbol3 = 's';
	char symbol4 = 'i';
	char symbol5 = 'Q';
	char symbol6 = 'a';
	char symbol7 = 'd';
	char symbol8 = 'i';
	char symbol9 = 'n';
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << "\t\t\t Adinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	getline(cin, ad);
	system("color 9");
	cout << endl;
	cout << "\t\t\t Cinsinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	cin.clear();
	getline(cin, cins);
	system("color 9");
	cout << endl;
	cout << "\t\t\t Yasinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	cin >> yas;
	system("color 9");
	cout << endl;
	cout << endl;
	system("color 9");
	system("cls");
	cout << endl;
	int a = cins.size();
	for (int i = 0; i < a; i++)
	{
		if (cins[i] == symbol1 || cins[i] == symbol2 || cins[i] == symbol3 || cins[i] == symbol4)
			cout << " " << yas << " yasli " << ad << " bey, oyuna xos geldiniz. " << endl;
		if (cins[i] == symbol5 || cins[i] == symbol6 || cins[i] == symbol7 || cins[i] == symbol8 || cins[i] == symbol9)
			cout << " " << yas << " yasli " << ad << " xanim, oyuna xos geldiniz. " << endl;
		break;
	}
	cout << endl;
	cout << " " << 0 << " <- Oynun qaydasi " << endl;
	cout << " \n Qaydalar ile tanis olun: ";
	SetConsoleTextAttribute(color, 7);
	cin >> qayda;
	cout << endl;
	cout << endl;
	return 0;
}

int qaydalar(int qayda)
{
	system("color 7");
	if (qayda == 0)
	{
		cout << " 1) Yarisma 15 sualdan ibaretdir. 5 -ci ve 10 -cu suallar kecid merhelesidir. \n " << endl;
		cout << " 2) 5 -ci, 10 -cu ve 15 -ci suallar hedd suallaridir . 10 -cu ve ya 15 -ci hedlere catmayanlar qazandiqlarini " << endl;
		cout << " itirerek xallarini evvelki heddin xalina beraberlesdirir . 5 -ci suali cavablamayanlar ise xallari itirir. \n " << endl;
		cout << " 3) Yalniz bir defe istifade edilme meqsedile 50-50, dosta zeng ve auditoriyanin komeyinden istifade edilir. \n " << endl;
		cout << " 4) Ilk sualin qiymetlendirilmesi 100 bal olmaqla her sual evvelkinden 100 bal artIq olur. \n " << endl;
	}
	return 0;
}







void oyun(int davam)
{

	system("color 7");
	cout << " \n Davam etmek ucun 1 -e basin: ";
	system("color 9");
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 7);
	cin >> davam;
	int komek;
	int yardim;
	int xal[15] = { 100, 200, 300, 400, 500,  600, 700, 800, 900, 1000,  1100, 1200, 1300, 1400, 1500 };
	char s1 = ' ';
	char s2 = ' ';
	char s3 = ' ';
	char s4 = ' ';
	char s5 = ' ';
	char s6 = ' ';
	char s7 = ' ';
	char s8 = ' ';
	char s9 = ' ';
	char s10 = ' ';
	char s11 = ' ';
	char s12 = ' ';
	char s13 = ' ';
	char s14 = ' ';
	char s15 = ' ';
	int yarilama = 1;
	int dostazeng = 1;
	int auditoriya = 1;
	Sleep(5000);
	system("cls");
	switch (davam)
	{
	case 1:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << endl;
		cout << " \t\t\t        Horumcekler haqqinda olan elm nece adlanir ?          " << endl;
		cout << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << endl;
		cout << " \t\t\t A) Araxnologiya                             B) Antropologiya " << endl;
		cout << endl;
		cout << " \t\t\t C) Arxiologiya                              D) Malakologiya  " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s1;
			Sleep(2000);
			cout << endl;
			if (s1 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[0] << " xal elde etdiniz.";

			}
			if (s1 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s1 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s1 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ============================================================ " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ============================================================ " << endl;
			cout << endl;
			cout << " \t\t\t ============================================================ " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ============================================================ " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s1;
					Sleep(2000);
					cout << endl;
					if (s1 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[0] << " xal elde etdiniz.";

					}
					if (s1 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s1 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s1 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya B variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s1;
					Sleep(2000);
					cout << endl;
					if (s1 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[0] << " xal elde etdiniz.";

					}
					if (s1 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s1 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s1 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << " \t\t\t ============================================================ " << endl;
					cout << endl;
					cout << " \t\t\t        Horumcekler haqqinda olan elm nece adlanir ?          " << endl;
					cout << endl;
					cout << " \t\t\t ============================================================ " << endl;
					cout << " \t\t\t ============================================================ " << endl;
					cout << endl;
					cout << " \t\t\t A) Araxnologiya                             B) Antropologiya " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s1;
					Sleep(2000);
					cout << endl;
					if (s1 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[0] << " xal elde etdiniz.";

					}
					if (s1 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}



		}
		Sleep(10000);
		system("cls");
	case 2:
		system("color 9");
		cout << endl;
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		cout << " \t\t ========================================================================================= " << endl;
		cout << endl;
		cout << " \t\t         Yalniz  San-marino, Vatikan ve Lesoto ucun ne ortaq cehet hesab olunur ?          " << endl;
		cout << endl;
		cout << " \t\t ========================================================================================= " << endl;
		cout << " \t\t ========================================================================================= " << endl;
		cout << endl;
		cout << " \t\t A) Teokratik dovletdirler.                      B) Italiyanin daxilinde yerlesirler       " << endl;
		cout << endl;
		cout << " \t\t C) Sosyalist dovletdirler.                      D) Denize ve ya okeana cixislari yoxdur.  " << endl;
		cout << endl;
		cout << " \n \t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;


		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t Sizin cavabiniz: ";
			cin >> s2;
			Sleep(2000);
			cout << endl;
			if (s2 == 'D')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t Doqru cavab. " << endl;;
				cout << "  \t\t " << xal[1] << " xal elde etdiniz.";

			}
			if (s2 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s2 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s2 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t ========================================================================================= " << endl;
			cout << " \t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t ========================================================================================= " << endl;
			cout << endl;
			cout << " \t\t ========================================================================================= " << endl;
			cout << " \t\t  Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t ========================================================================================= " << endl;
			cout << endl;
			cout << " \t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t Sizin cavabiniz: ";
					cin >> s2;
					Sleep(2000);
					cout << endl;
					if (s2 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Doqru cavab. " << endl;;
						cout << "  \t\t " << xal[1] << " xal elde etdiniz.";

					}
					if (s2 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s2 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s2 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t Auditoriya D variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t Sizin cavabiniz: ";
					cin >> s2;
					Sleep(2000);
					cout << endl;
					if (s2 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Doqru cavab. " << endl;;
						cout << "  \t\t " << xal[1] << " xal elde etdiniz.";

					}
					if (s2 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s2 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s2 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << " \t\t ========================================================================================= " << endl;
					cout << endl;
					cout << " \t\t         Yalniz  San-marino, Vatikan ve Lesoto ucun ne ortaq cehet hesab olunur ?          " << endl;
					cout << endl;
					cout << " \t\t ========================================================================================= " << endl;
					cout << " \t\t ========================================================================================= " << endl;
					cout << endl;
					cout << " \t\t B) Italiyanin daxilindE yerlesirler.             D) Denize ve ya okeana cixislari yoxdur. " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t Sizin cavabiniz: ";
					cin >> s2;
					Sleep(2000);
					cout << endl;
					if (s2 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t Doqru cavab. " << endl;;
						cout << "  \t\t " << xal[1] << " xal elde etdiniz.";

					}
					if (s2 == 'B')
					{
						cout << "  \t\t Uduzdunuz. \n ";
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(4000);
						break;

					}

					break;
				}

			}

		}
		Sleep(10000);
		system("cls");





	case 3:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t 1964-ci il istehsali olan bu Azerbaycan filminde illuzionist Anatoli   " << endl;
		cout << " \t\t\t Falkovun komeyile kecmis ve gelecek  usaqlarin gozu ile tesvir olunur. " << endl;
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t A) Arazin o tayinda                         B) Telefoncu qiz " << endl;
		cout << endl;
		cout << " \t\t\t C) Sehirli xalat                            D) Feryad        " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s3;
			Sleep(2000);
			cout << endl;
			if (s3 == 'C')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[2] << " xal elde etdiniz.";

			}
			if (s3 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s3 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s3 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz C variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s3;
					Sleep(2000);
					cout << endl;
					if (s3 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[2] << " xal elde etdiniz.";

					}
					if (s3 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s3 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s3 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya B variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s3;
					Sleep(2000);
					cout << endl;
					if (s3 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[2] << " xal elde etdiniz.";

					}
					if (s3 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s3 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s3 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t 1964-ci il istehsali olan bu Azerbaycan filminde illuzionist Anatoli   " << endl;
					cout << " \t\t\t Falkovun komeyile kecmis ve gelecek  usaqlarin gozu ile tesvir olunur. " << endl;
					cout << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t B) Telefoncu qiz                            C) Sehirli xalat " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s3;
					Sleep(2000);
					cout << endl;
					if (s3 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[2] << " xal elde etdiniz.";

					}
					if (s3 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}
	Sleep(10000);
	system("cls");


	case 4:    PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t          Tac Mahal hansi Turk imperiyasi dovrunde tikilib ?            " << endl;
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t A) Goyturk Imperiyasi                        B) Osmanli Imperiyasi     " << endl;
		cout << endl;
		cout << " \t\t\t C) Qerbi Hun Imperiyasi                      D) Boyuk Mogol Imperiyası " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s4;
			Sleep(2000);
			cout << endl;
			if (s4 == 'D')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[3] << " xal elde etdiniz.";

			}
			if (s4 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s4 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;

			}
			if (s4 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s4;
					Sleep(2000);
					cout << endl;
					if (s4 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[3] << " xal elde etdiniz.";

					}
					if (s4 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s4 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s4 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya B variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s4;
					Sleep(2000);
					cout << endl;
					if (s4 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[3] << " xal elde etdiniz.";

					}
					if (s4 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s4 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}
					if (s4 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t          Tac Mahal hansi Turk imperiyasi dovrunde tikilib ?            " << endl;
					cout << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t B) Osmanli Imperiyasi                        D) Boyuk Mogol Imperiyası " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s4;
					Sleep(2000);
					cout << endl;
					if (s4 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[3] << " xal elde etdiniz.";

					}
					if (s4 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}
			

	Sleep(10000);
	system("cls");

    case 5:
	PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
	system("color 9");
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t   Bezi aylar 30, bezileri 31, nece ayda 28 gun vardir ?      " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t A) 12 ay                                      B) 1 ay     " << endl;
	cout << endl;
	cout << " \t\t\t C) 6 ay                                       D) 3 ay     " << endl;
	cout << endl;
	cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
	cin >> komek;
	if (komek == 0)
	{
		cout << endl;
		cout << "  \t\t\t Sizin cavabiniz: ";
		cin >> s5;
		Sleep(2000);
		cout << endl;
		if (s5 == 'A')
		{
			PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "  \t\t\t Doqru cavab. " << endl;;
			cout << "  \t\t\t " << xal[4] << " xal elde etdiniz.";

		}
		if (s5 == 'B')
		{
			PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "  \t\t\t Uduzdunuz. \n ";
			Sleep(4000);
			break;

		}
		if (s5 == 'D')
		{
			PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "  \t\t\t Uduzdunuz. \n ";
			Sleep(4000);
			break;

		}
		if (s5 == 'C')
		{
			PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "  \t\t\t Uduzdunuz. \n ";
			Sleep(4000);
			break;
		}


	}
	if (komek == 1)
	{
		cout << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
		cout << " \t\t\t ============================================================ " << endl;
		cout << endl;
		cout << " \t\t\t Seciminizi edin: ";
		cin >> yardim;
		switch (yardim)
		{
		case 1:
			if (dostazeng == 1)
			{
				cout << " \t\t\t Dostunuz A variantini secdi.";
				dostazeng--;
				cout << endl;
				cout << "  \t\t\t Sizin cavabiniz: ";
				cin >> s5;
				Sleep(2000);
				cout << endl;
				if (s5 == 'A')
				{
					PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Doqru cavab. " << endl;;
					cout << "  \t\t\t " << xal[4] << " xal elde etdiniz.";

				}
				if (s5 == 'B')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;

				}
				if (s5 == 'D')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;

				}
				if (s5 == 'C')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;
				}

				break;
			}

		case 2:
			if (auditoriya == 1)
			{
				cout << " \t\t\t Auditoriya D variantini secdi.";
				auditoriya--;
				cout << endl;
				cout << "  \t\t\t Sizin cavabiniz: ";
				cin >> s5;
				Sleep(2000);
				cout << endl;
				if (s5 == 'A')
				{
					PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Doqru cavab. " << endl;;
					cout << "  \t\t\t " << xal[4] << " xal elde etdiniz.";

				}
				if (s5 == 'B')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;

				}
				if (s5 == 'D')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;

				}
				if (s5 == 'C')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;
				}
				break;
			}
		case 3:
			system("cls");
			if (yarilama == 1)
			{
				cout << " \t\t\t ============================================================ " << endl;
				cout << endl;
				cout << " \t\t\t   Bezi aylar 30, bezileri 31, nece ayda 28 gun vardir ?      " << endl;
				cout << endl;
				cout << " \t\t\t ============================================================ " << endl;
				cout << " \t\t\t ============================================================ " << endl;
				cout << endl;
				cout << " \t\t\t A) 12 ay                                          B) 1 ay " << endl;
				yarilama--;
				cout << endl;
				cout << "  \t\t\t Sizin cavabiniz: ";
				cin >> s5;
				Sleep(2000);
				cout << endl;
				if (s5 == 'A')
				{
					PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Doqru cavab. " << endl;;
					cout << "  \t\t\t " << xal[4] << " xal elde etdiniz.";

				}
				if (s5 == 'B')
				{
					PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
					cout << "  \t\t\t Uduzdunuz. \n ";
					Sleep(4000);
					break;

				}

				break;
			}



		}


	}
	Sleep(10000);
	system("cls"); 


	case 6:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t Bir cutcunun 17 qoyunu vardi. Surude epidemiya xestelik oldu,          " << endl;
		cout << " \t\t\t doqquzu agir xestelendi, digerleri oldu. Cutcunun nece qoyunu var?     " << endl;
		cout << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << " \t\t\t ====================================================================== " << endl;
		cout << endl; 
		cout << " \t\t\t A) 17                                                             B) 8 " << endl;
		cout << endl;
		cout << " \t\t\t C) 9                                                              D) 1 " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s6;
			Sleep(2000);
			cout << endl;
			if (s6 == 'C')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[5] << " xal elde etdiniz.";

			}
			if (s6 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s6 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s6 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ====================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz C variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s6;
					Sleep(2000);
					cout << endl;
					if (s6 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[5] << " xal elde etdiniz.";

					}
					if (s6 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s6 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s6 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya B variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s6;
					Sleep(2000);
					cout << endl;
					if (s6 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[5] << " xal elde etdiniz.";

					}
					if (s6 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s6 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s6 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t Bir cutcunun 17 qoyunu vardi. Surude epidemiya xestelik oldu,          " << endl;
					cout << " \t\t\t doqquzu agir xestelendi, digerleri oldu. Cutcunun nece qoyunu var?     " << endl;
					cout << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << " \t\t\t ====================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t B) 8                                                              C) 9 " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s6;
					Sleep(2000);
					cout << endl;
					if (s6 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[5] << " xal elde etdiniz.";

					}
					if (s6 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}
		Sleep(10000);
		system("cls");



	case 7:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t   Bu olkenin Atlantik okeana çixişi olsa da, yalniz Seneqalla hemserheddir.  " << endl;
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t A) Merakes                                                        B) Meksika " << endl;
		cout << endl;
		cout << " \t\t\t C) Qambiya                                                        D) Laos    " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s7;
			Sleep(2000);
			cout << endl;
			if (s7 == 'C')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[6] << " xal elde etdiniz.";

			}
			if (s7 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s7 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s7 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz C variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s7;
					Sleep(2000);
					cout << endl;
					if (s7 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[6] << " xal elde etdiniz.";

					}
					if (s7 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s7 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s7 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya A variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s7;
					Sleep(2000);
					cout << endl;
					if (s7 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[6] << " xal elde etdiniz.";

					}
					if (s7 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s7 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s7 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t   Bu olkenin Atlantik okeana çixişi olsa da, yalniz Seneqalla hemserheddir.  " << endl;
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t C) Qambiya                                                           D) Laos " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s7;
					Sleep(2000);
					cout << endl;
					if (s7 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[6] << " xal elde etdiniz.";

					}
					if (s7 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}
	Sleep(10000);
	system("cls"); 	


    case 8:    PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t   Mirze Elekkber Sabirin seirler toplusu hansi ad altinda çap olunmusdur ?   " << endl;
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t A) Sikayetname                                               B) Vesiyyetname " << endl;
		cout << endl;
		cout << " \t\t\t C) Xemse                                                     D) Hophop-name  " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s8;
			Sleep(2000);
			cout << endl;
			if (s8 == 'D')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[7] << " xal elde etdiniz.";

			}
			if (s8 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s8 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s8 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s8;
					Sleep(2000);
					cout << endl;
					if (s8 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[7] << " xal elde etdiniz.";

					}
					if (s8 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s8 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s8 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya B variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s8;
					Sleep(2000);
					cout << endl;
					if (s8 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[7] << " xal elde etdiniz.";

					}
					if (s8 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s8 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s8 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t   Mirze Elekkber Sabirin seirler toplusu hansi ad altinda çap olunmusdur ?  " << endl;
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t B) Vesiyyetname                                               D) Hophop-name " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s8;
					Sleep(2000);
					cout << endl;
					if (s8 == 'D')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[7] << " xal elde etdiniz.";

					}
					if (s8 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}

	Sleep(10000);
	system("cls");

			
    case 9:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t          Bu olkelerden hansi hem adada, hem de yarimadada yerlesir ?         " << endl;
		cout << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << " \t\t\t ============================================================================ " << endl;
		cout << endl;
		cout << " \t\t\t A) Malaziya                                                    B) Venesuella " << endl;
		cout << endl;
		cout << " \t\t\t C) Indonesiya                                                  D) Yaponiya   " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s9;
			Sleep(2000);
			cout << endl;
			if (s9 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[8] << " xal elde etdiniz.";

			}
			if (s9 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s9 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s9 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ============================================================================ " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz D variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s9;
					Sleep(2000);
					cout << endl;
					if (s9 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[8] << " xal elde etdiniz.";

					}
					if (s9 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s9 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s9 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya A variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s9;
					Sleep(2000);
					cout << endl;
					if (s9 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[8] << " xal elde etdiniz.";

					}
					if (s9 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s9 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s9 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t          Bu olkelerden hansi hem adada, hem de yarimadada yerlesir ?         " << endl;
					cout << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << " \t\t\t ============================================================================ " << endl;
					cout << endl;
					cout << " \t\t\t A) Malaziya                                                    B) Venesuella " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s9;
					Sleep(2000);
					cout << endl;
					if (s9 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[8] << " xal elde etdiniz.";

					}
					if (s9 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}



			}


		}

		Sleep(10000);
		system("cls");


	case 10:
			
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t Rejissor Cahangir Mehdiyevin cekdiyi hansi filmde Qasim rolunun ifacisi Ejder İbrahimovdu ? " << endl;
		cout << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t A) Kişi sözü                                                           B) Diplom işi        " << endl;
		cout << endl;
		cout << " \t\t\t C) Dəli Kür                                                            D) Girişmə, öldürər! " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s10;
			Sleep(2000);
			cout << endl;
			if (s10 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[9] << " xal elde etdiniz.";

			}
			if (s10 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s10 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s10 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s10;
					Sleep(2000);
					cout << endl;
					if (s10 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[9] << " xal elde etdiniz.";

					}
					if (s10 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s10 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s10 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya A variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s10;
					Sleep(2000);
					cout << endl;
					if (s10 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[9] << " xal elde etdiniz.";

					}
					if (s10 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s10 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s10 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t Rejissor Cahangir Mehdiyevin cekdiyi hansi filmde Qasim rolunun ifacisi Ejder İbrahimovdu ? " << endl;
					cout << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t A) Kişi sözü                                                                    C) Dəli Kür " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s10;
					Sleep(2000);
					cout << endl;
					if (s10 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[9] << " xal elde etdiniz.";

					}
					if (s10 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[4] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

	Sleep(10000);
	system("cls");

	case 11:
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t        Ingilterenin mustemlekecilik siyasetinin ilk olaraq qurbani hansi olke oldu ?        " << endl;
		cout << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << " \t\t\t =========================================================================================== " << endl;
		cout << endl;
		cout << " \t\t\t A) Rusiya                                                                      B) Irlandiya " << endl;
		cout << endl;
		cout << " \t\t\t C) Hollandiya                                                                  D) Ispaniya  " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s11;
			Sleep(2000);
			cout << endl;
			if (s11 == 'B')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[10] << " xal elde etdiniz.";

			}
			if (s11 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s11 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s11 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t =========================================================================================== " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s11;
					Sleep(2000);
					cout << endl;
					if (s11 == 'B')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[10] << " xal elde etdiniz.";

					}
					if (s11 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s11 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s11 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya A variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s11;
					Sleep(2000);
					cout << endl;
					if (s11 == 'B')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[10] << " xal elde etdiniz.";

					}
					if (s11 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s11 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s11 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t        Ingilterenin mustemlekecilik siyasetinin ilk olaraq qurbani hansi olke oldu ?        " << endl;
					cout << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << " \t\t\t =========================================================================================== " << endl;
					cout << endl;
					cout << " \t\t\t A) Rusiya                                                                      B) Irlandiya " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s11;
					Sleep(2000);
					cout << endl;
					if (s11 == 'B')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[10] << " xal elde etdiniz.";

					}
					if (s11 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

	Sleep(10000);
	system("cls");  

    case 12:

		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t                   Ilk toxuculuq fabrikini kim yaradib ?                   " << endl;
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t A) Ricard Arkrayt                                      B) Edmund Kartrayt " << endl;
		cout << endl;
		cout << " \t\t\t C) Con Key                                             D) Ceyms Uatt      " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s12;
			Sleep(2000);
			cout << endl;
			if (s12 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[11] << " xal elde etdiniz.";

			}
			if (s12 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s12 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s12 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s12;
					Sleep(2000);
					cout << endl;
					if (s12 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[11] << " xal elde etdiniz.";

					}
					if (s12 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s12 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s12 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya C variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s12;
					Sleep(2000);
					cout << endl;
					if (s12 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[11] << " xal elde etdiniz.";

					}
					if (s12 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s12 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s12 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t                   Ilk toxuculuq fabrikini kim yaradib ?                   " << endl;
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t A) Ricard Arkrayt                                      B) Edmund Kartrayt " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s12;
					Sleep(2000);
					cout << endl;
					if (s12 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[11] << " xal elde etdiniz.";

					}
					if (s12 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

	Sleep(10000);
	system("cls"); 

    case 13: 	
		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t                  Neler niqte muəyyen emosionalliq verir ?                 " << endl;
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t A) Ritorika, mimika                                    B) Jest, poetizm   " << endl;
		cout << endl;
		cout << " \t\t\t C) Mimika, jest                                        D) Etiket, poetizm " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s13;
			Sleep(2000);
			cout << endl;
			if (s13 == 'C')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[12] << " xal elde etdiniz.";

			}
			if (s13 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s13 == 'A')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s13 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s13;
					Sleep(2000);
					cout << endl;
					if (s13 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[12] << " xal elde etdiniz.";

					}
					if (s13 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s13 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s13 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya C variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s13;
					Sleep(2000);
					cout << endl;
					if (s13 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[12] << " xal elde etdiniz.";

					}
					if (s13 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s13 == 'A')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s13 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t                  Neler niqte muəyyen emosionalliq verir ?                 " << endl;
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t C) Mimika, jest                                        D) Etiket, poetizm " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s13;
					Sleep(2000);
					cout << endl;
					if (s13 == 'C')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[12] << " xal elde etdiniz.";

					}
					if (s13 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

				
	Sleep(10000);
    system("cls");

	case 14:

		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t                   Kompromis sozune hansi uygun gelir ?                    " << endl;
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t A) Guzest etmek                                        B) Ticaret etmek   " << endl;
		cout << endl;
		cout << " \t\t\t C) Muharibe etmek                                      D) Tezminat vermek " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s14;
			Sleep(2000);
			cout << endl;
			if (s14 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[13] << " xal elde etdiniz.";

			}
			if (s14 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s14 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s14 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz A variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s14;
					Sleep(2000);
					cout << endl;
					if (s14 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[13] << " xal elde etdiniz.";

					}
					if (s14 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s14 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s14 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya C variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s14;
					Sleep(2000);
					cout << endl;
					if (s14 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[13] << " xal elde etdiniz.";

					}
					if (s14 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s14 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s14 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t                   Kompromis sozune hansi uygun gelir ?                    " << endl;
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t A) Guzest etmek                                        B) Ticaret etmek   " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s14;
					Sleep(2000);
					cout << endl;
					if (s14 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[13] << " xal elde etdiniz.";

					}
					if (s14 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

		Sleep(10000);
		system("cls");

	case 15:

		PlaySound(TEXT("question1.wav"), NULL, SND_FILENAME | SND_ASYNC);
		system("color 9");
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t                 Nuve hansi komponentlerden teskil olunmusdur?             " << endl;
		cout << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << " \t\t\t ========================================================================= " << endl;
		cout << endl;
		cout << " \t\t\t A) Nuve perdesi, nuve siresi, xromatin ve nüvecik                         " << endl;
		cout << endl;
		cout << " \t\t\t B) Nuve perdesi, nuve siresi, DNT ve RNT                                  " << endl;
		cout << endl;
		cout << " \t\t\t C) Nuve siresi, fermentler, membran                                  " << endl;
		cout << endl;
		cout << " \t\t\t D) Xromatin, nuve perdesi, DNT ve RNT                                  " << endl;
		cout << endl;
		cout << " \n \t\t\t Komeye ehtiyaciniz varsa 1 -e, yoxsa 0 -a basin: ";
		cin >> komek;
		if (komek == 0)
		{
			cout << endl;
			cout << "  \t\t\t Sizin cavabiniz: ";
			cin >> s15;
			Sleep(2000);
			cout << endl;
			if (s15 == 'A')
			{
				PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Doqru cavab. " << endl;;
				cout << "  \t\t\t " << xal[14] << " xal elde etdiniz.";

			}
			if (s15 == 'B')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s15 == 'C')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;

			}
			if (s15 == 'D')
			{
				PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
				cout << "  \t\t\t Uduzdunuz. \n ";
				cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
				Sleep(4000);
				break;
			}


		}
		if (komek == 1)
		{
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Yardimlarin sayi ->  Dosta zeng " << dostazeng << "; Auditoriya-> " << auditoriya << "; 50/50-> " << yarilama << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << " \t\t\t Dosta zeng -> 1; Auditoriya -> 2; 50/50 -> 3 " << endl;
			cout << " \t\t\t ========================================================================= " << endl;
			cout << endl;
			cout << " \t\t\t Seciminizi edin: ";
			cin >> yardim;
			switch (yardim)
			{
			case 1:
				if (dostazeng == 1)
				{
					cout << " \t\t\t Dostunuz B variantini secdi.";
					dostazeng--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s15;
					Sleep(2000);
					cout << endl;
					if (s15 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[14] << " xal elde etdiniz.";

					}
					if (s15 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s15 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s15 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}

					break;
				}

			case 2:
				if (auditoriya == 1)
				{
					cout << " \t\t\t Auditoriya C variantini secdi.";
					auditoriya--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s15;
					Sleep(2000);
					cout << endl;
					if (s15 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[14] << " xal elde etdiniz.";

					}
					if (s15 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s15 == 'C')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}
					if (s15 == 'D')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;
					}
					break;
				}
			case 3:
				system("cls");
				if (yarilama == 1)
				{
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t                 Nuve hansi komponentlerden teskil olunmusdur?             " << endl;
					cout << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << " \t\t\t ========================================================================= " << endl;
					cout << endl;
					cout << " \t\t\t A) Nuve perdesi, nuve siresi, xromatin ve nüvecik                         " << endl;
					cout << endl;
					cout << " \t\t\t B) Nuve perdesi, nuve siresi, DNT ve RNT                                  " << endl;
					yarilama--;
					cout << endl;
					cout << "  \t\t\t Sizin cavabiniz: ";
					cin >> s15;
					Sleep(2000);
					cout << endl;
					if (s15 == 'A')
					{
						PlaySound(TEXT("win1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Doqru cavab. " << endl;;
						cout << "  \t\t\t " << xal[14] << " xal elde etdiniz.";

					}
					if (s15 == 'B')
					{
						PlaySound(TEXT("lose1.wav"), NULL, SND_FILENAME | SND_ASYNC);
						cout << "  \t\t\t Uduzdunuz. \n ";
						cout << "  \t\t\t " << xal[9] << " xalla oyunu terk edirsiniz. \n ";
						Sleep(4000);
						break;

					}

					break;
				}


			}


		}

		Sleep(10000);

		system("cls");

	}
}


int main()
{

	string ad;
	string cins;
	int yas = 0;
	char symbol1 = 'K';
	char symbol2 = 'i';
	char symbol3 = 's';
	char symbol4 = 'i';
	char symbol5 = 'Q';
	char symbol6 = 'a';
	char symbol7 = 'd';
	char symbol8 = 'i';
	char symbol9 = 'n';
	int qayda = 0;
	int davam = 0;
	int yarilama = 1;
	int dostazeng = 1;
	int auditoriya = 1;
	acilis();
	qeydiyyat(yas, ad, cins, qayda);
	qaydalar(qayda);
	oyun(davam);
	
}

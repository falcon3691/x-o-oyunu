#include <iostream>
#include <windows.h>
using namespace std;
void tahta();
int kontrol();
char kutu[10] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9' };
int main()
{
	setlocale(LC_ALL, "Turkish");
	char isaret[3] = { '@','X','O' };
	int oyuncu, secim, i;
	i = 0;
	oyuncu = 0;
	while (i == 0) {
		tahta();
		oyuncu = (oyuncu % 2) ? 2 : 1;
		cout <<"\t" << oyuncu << ".Oyuncunun sırası: ";
		cin >> secim;
		if (secim == 1 && kutu[1] == '1') {
			kutu[1] = isaret[oyuncu];
		}
		else if (secim == 2 && kutu[2] == '2') {
			kutu[2] = isaret[oyuncu];
		}
		else if (secim == 3 && kutu[3] == '3') {
			kutu[3] = isaret[oyuncu];
		}
		else if (secim == 4 && kutu[4] == '4') {
			kutu[4] = isaret[oyuncu];
		}
		else if (secim == 5 && kutu[5] == '5') {
			kutu[5] = isaret[oyuncu];
		}
		else if (secim == 6 && kutu[6] == '6') {
			kutu[6] = isaret[oyuncu];
		}
		else if (secim == 7 && kutu[7] == '7') {
			kutu[7] = isaret[oyuncu];
		}
		else if (secim == 8 && kutu[8] == '8') {
			kutu[8] = isaret[oyuncu];
		}
		else if (secim == 9 && kutu[9] == '9') {
			kutu[9] = isaret[oyuncu];
		}
		else {
			cout << "Yanlış bir tuşa bastınız.";
			oyuncu--;
			Sleep(2000);
		}
		system("cls");
		i = kontrol();
	}
	tahta();
	if (i == 1) {
		cout << "\t-------------------\n";
		cout << "\t|" << oyuncu << ".Oyuncu Kazandı.|\n";
		cout << "\t-------------------\n\n\n";
	}
	else if (i == -1) {
		cout << "\t-----------------\n";
		cout << "\t|" << "Berabere bitti.| \n";
		cout << "\t-----------------\n\n\n";

	}
}

int kontrol() {
	if (kutu[1] == kutu[2] && kutu[2] == kutu[3]) {
		return 1;
	}
	else if (kutu[4] == kutu[5] && kutu[5] == kutu[6]) {
		return 1;
	}
	else if (kutu[7] == kutu[8] && kutu[8] == kutu[9]) {
		return 1;
	}
	else if (kutu[1] == kutu[4] && kutu[4] == kutu[7]) {
		return 1;
	}
	else if (kutu[2] == kutu[5] && kutu[5] == kutu[8]) {
		return 1;
	}
	else if (kutu[3] == kutu[6] && kutu[6] == kutu[9]) {
		return 1;
	}
	else if (kutu[1] == kutu[5] && kutu[5] == kutu[9]) {
		return 1;
	}
	else if (kutu[3] == kutu[5] && kutu[5] == kutu[7]) {
		return 1;
	}
	else if (kutu[1] != '1' && kutu[2] != '2' && kutu[3] != '3' &&
		kutu[4] != '4' && kutu[5] != '5' && kutu[6] != '6' &&
		kutu[7] != '7' && kutu[8] != '8' && kutu[9] != '9') {
		return -1;
	}
	else {
		return 0;
	}
}

void tahta() {
	setlocale(LC_ALL, "Turkish");
	cout << "\t\t   X-O-X\n\n";
	cout << "\t1.Oyuncu(X)    2.Oyuncu(O)\n\n";
	cout << "\t        --- --- ---\n";
	cout << "\t        |" << kutu[1] << "|" << " |" << kutu[2] << "|" << " |" << kutu[3] << "|";
	cout << "\n\t        --- --- ---\n";
	cout << "\t        |" << kutu[4] << "|" << " |" << kutu[5] << "|" << " |" << kutu[6] << "|";
	cout << "\n\t        --- --- ---\n";
	cout << "\t        |" << kutu[7] << "|" << " |" << kutu[8] << "|" << " |" << kutu[9] << "|";
	cout << "\n\t        --- --- ---\n\n";
	cout << "\tBir numara seçiniz.\n\n";
}
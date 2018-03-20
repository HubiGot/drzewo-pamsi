#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include <fstream>


#include"kolejka.hh"


using namespace std;




main(){

  int wybor;
	queue kolejka;
	do {
    cout << "Kolejka priorytetowa" << endl;
		cout << "1. Wyswietlanie" << endl;
		cout << "2. Dodawanie" << endl;
		cout << "3. Usuwanie" << endl;;
		cout << "4. Koniec programu" << endl;
		cin >> wybor;

		switch (wybor) {

			break;
		case 1:
			kolejka.display();
			cout << "\n";
			break;
		case 2:
			int liczba, prio;
      cout << "Podaj element, wcisnij eneter, a nastepnie podaj jego priorytet"<<endl;
			cin >> liczba;
      cin >> prio;
			kolejka.push(liczba,prio);
			break;
		case 3:
			kolejka.pop();
			cout << "Usunieto pierwszy element" << endl;
			break;
		case 4:
			exit(1);
			break;



		}
	} while (wybor != 4);
}

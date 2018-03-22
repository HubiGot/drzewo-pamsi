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
		cout << "1. Wyswietlanie kolejki" << endl;
		cout << "2. Dodawanie elementu bez sortowania" << endl;
    cout << "3. Dodawanie z sortowaniem przez wybieranie wg priorytetu"<<endl;
		cout << "4. Usuwanie pierwszego elementu" << endl;
		cout << "5. Koniec dzialania programu :)" << endl;
		cin >> wybor;

		switch (wybor) {

			break;
		case 1:
      {
      cout <<"Element: priorytet"<<endl;
			kolejka.display();
			cout << "\n";
			break;
      }
		case 2:
      {
			int liczba, prio;
      cout << "Podaj element, a nastepnie podaj jego priorytet"<<endl;
			cin >> liczba;
      cin >> prio;
			kolejka.push(liczba,prio);
			break;
      }
    case 3:
      {
    int liczba2,prio2;
    cout << "Podaj element, a nastepnie podaj jego priorytet"<<endl;
    cin >>liczba2;
    cin >> prio2;
    kolejka.pushsort(liczba2,prio2);
    break;
      }
		case 4:
      {
			kolejka.pop();
			cout << "Usunieto pierwszy element z kolejki" << endl;
			break;
      }
		case 5:
      {
			cout << "Koniec dzialania programu!"<<endl;
			break;
      }


		}
	} while (wybor != 5);
}

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include <fstream>


#include"kolejka.hh"


using namespace std;

//algorytm sortowania
void sort(queue &K)
{
  queue P;
  list *e=new list;
  while(!K.empty())
  {
    e=K.frontpop();
    P.push(e->data,e->prio);
  }
  while(!P.empty())
  {
  e=P.findMax();
  K.push(e->data,e->prio);
  P.remove(e);
  }

}



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
    cout << "6. Sortowanie przez wybieranie" <<endl;
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
      case 6:
      {
        sort(kolejka);
        cout<<"Kolejka została posortowana! :)"<<endl;
        break;
      }

		}
	} while (wybor != 5);
}

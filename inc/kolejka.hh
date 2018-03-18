#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib>

using namespace std;

//Typ elementow kolejki priorytetowej
struct list {

  list *next;
  int prio;       //priotrytet elementu
  int data;
};


class queue {

list *head                          //wskaznik na poczatek kolejki
list *tail                          //wskaznik na koniec kolejki

public:
  queue();                        //konstruktor kolejki
  ~queue();                       //destruktor kolejki
  bool empty();                   // metoda sprawdzajaca czy kolejka jest pusta
  int front();                    // metoda zwracajaca poczatek kolejki
  int frontprio();                //metoda zwracajaca priotytet poczatkowego elementu kolejki
  void push(int prio, int dt);     // metoda zapisujaca element w kolejce
  void pop();                     // metoda usuwajaca poczatkowy element z kolejki
};







#endif

#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

using namespace std;

//Typ elementow kolejki priorytetowej
struct list {

  list *next;
  int prio;       //priotrytet elementu
  int data;
};


class queue {

list *head;                          //wskaznik na poczatek kolejki
list *tail;                          //wskaznik na koniec kolejki

public:
  queue();                        //konstruktor kolejki
  ~queue();                       //destruktor kolejki
  bool empty();                   // metoda sprawdzajaca czy kolejka jest pusta
  int front();                    // metoda zwracajaca poczatek kolejki
  int frontprio();                //metoda zwracajaca priotytet poczatkowego elementu kolejki
  void push(int data, int prio);     // metoda zapisujaca element w kolejce
  void pop();                     // metoda usuwajaca poczatkowy element z kolejki
  void display();                 //metoda wyswietla na wyjscie elementy kolejki
  void pushsort(int data, int prio); //metoda wstawiajac element sortuje kolejke wg priorytetu

  list* Rhead() //dostep do glowy
  {
  return head;
  }

  list* Rtail() // dostep do ogona
  {
    return tail;
  }


  //metoda zwraca pierwszy element kolejki i usuwa go
  list* frontpop() //dziala poprawnie
  {
  if(head==NULL)
    {
      cout<<"Kolejka pusta! :("<<endl;
    }
    else
    {
      return head;
      this->pop();
    }
  }

//metoda znajdujaca element o najwiekszym pirorytecie
  list* findMax()  //dziala poprawnie
{
  list* p, *pmax;
  pmax=head;
  if(head)
  {
    for(p=head->next;p;p=p->next)
    {
      if(p->prio>pmax->prio)
      {
        pmax=p;
      }
    }
  }
    return pmax;
}

// metoda usuwajaca konkretny element na liscie
void remove(list* e) //dziala poprawnie
{
list* p;
if(head==e)
  {
  p=head;
  if(p)
    {
      head=p->next;
      delete p;
    }
  }
else
{
  p=head;
  while(p->next!=e)
  {
    p=p->next;
  }
  p->next=e->next;
  delete e;
}
}

//sortowanie przez wybieranie
void sort()
{
  queue P;
  list *e=new list;
  //list *p=new list;
  while(head!=NULL)
  {
    e=this->frontpop();
    P.push(e->data,e->prio);
  }
  while(!P.empty())
  {
  e=P.findMax();
  this->push(e->data,e->prio);
  P.remove(P.findMax());
  }

}




};







#endif

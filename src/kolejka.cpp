#include "kolejka.hh"

using namespace std;
//konstruktor
queue::queue()
{
head=tail=NULL;
}

//destruktor kolejki
queue::~queue()
{
  while(head!=NULL)
  {
    pop();
  }
}

//funkcja sprawdza czy kolejka jest pusta -> zwraca true jesli jest pusta
bool queue::empty()
{
if(head==NULL)
  {
  return 1;
  }
  else
    {
    return 0;
    }
}


//funkcja zwraca pierwszy element w kolejce
int queue::front()
{
if(head==NULL)
  {
    cout<<"Kolejka pusta! :("<<endl;
  }
  else
  {
    return head->data;
  }
}

//funkcja zwraca priorytet pierwszego elementu z kolejki
int queue::frontprio()
{
if(head==NULL)
{
  cout<<"Kolejka pusta! :("<<endl;
}
  else
  {
    return head->prio;
  }
}

//funkcja umieszczajaca element w kolejce
void queue::push(int data, int prio)
{
  list * p=new list;
  p->next = NULL;
  p->data=data;
  p->prio=prio;
  if(tail!=0)
    {
      tail->next=p;
      tail=p;
    }
    else
    {
      head=p;
      tail=p;
    }
}

//funkcja usuwa pierwszy element z kolejki
void queue::pop()
  {
		if(head)
    {
      list* p=head;
      head=head->next;
      if(!head) tail=NULL;
      delete p;
    }
	}


//funkcja wyswietlajaca elementy kolejki na ekran
void queue::display()
{
  list *p=new list;
  p=head;
  if(head==NULL)
  {
    cout<<"Kolejka jest pusta! :("<<endl;
  }
    else
    {
      while(p!=NULL)
      {
        cout<< p->data; cout<<":"<<" ";
        cout<< p->prio <<endl;
        p=p->next;
      }
    }
}

//metoda wstawiajac element sortuje kolejke wg priorytetu (algorytm insertion sort - sortowanie przez wstawianie)
void queue::pushsort(int data, int prio)
{
list *p,*r;
p= new list;
p->next = NULL;                         //inicjujemy nowy element
p->prio = prio;
p->data = data;
if(!head)                               //sprawdzamy czy kolejka jest pusta
  {
     head = tail = p;                   //wstawianie pierwszego elementu
  }
  else if(head->prio < prio)            //sprwdzamy czy element ma wyzszy priorytet niz glowa
  {
    p->next=head;                     //jesli tak to wstawiamy go na poczatek listy
    head=p;
  }
 else
  {
    r=head;           //rozpoczynamy przeszukiwanie listy zaczynajac od poczatku
    while((r->next) && (r->next->prio >= prio))  //szukamy na liscie elementu o nizszym priorytecie
      {
        r = r->next;
      }
      p->next = r->next;      //wstawiamy nowy element przed ten znaleziony
      r->next = p;

      if(!p->next) tail = p;    //jesli element jest na koncu to przesuwamy na niego ogon
  }



}

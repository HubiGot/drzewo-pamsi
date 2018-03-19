#include"Kolejka.hh"

//konstruktor
queue::queue()
{
head=tail=NULL;
}

//destruktor kolejki
queue::~queue()
{
  while(head!=0)
  {
    pop();
  }
}

//funkcja sprawdza czy kolejka jest pusta -> zwraca true jesli jest pusta
bool queue::empty()
{
if(head==0)
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
if(head==0)
  {
    cout<<"Kolejka pusta! :("<<endl;
    return 0;
  }
  else
  {
    return head->data;
  }
}

//funkcja zwraca priorytet pierwszego elementu z kolejki
int queue::frontprio()
{
if(head==0)
{
  cout<<"Kolejka pusta! :("<<endl;
  return 0;
}
  else
  {
    return head->prio;
  }
}

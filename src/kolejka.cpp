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
if(head==NULL)
  {
    cout<<"Kolejka pusta! :("<<endl;
  }
  else
    {
      list *p=head;
      head=head->next;
      if(head==NULL)
      {
        tail=NULL;
      }
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
        cout<< p->data <<"\t";
        cout<< p->prio <<endl;
        p=p->next;
      }
    }
}

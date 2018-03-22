//sortowanie przez wybieranie
void sort()
{
  queue P;
  list *e=new list;
  //list *p=new list;
  while(!this->empty())
  {
    e=this->frontpop();
    P.push(e->data,e->prio);
  }
  while(!P.empty())
  {
  e=P.findMax();
  this->push(e->data,e->prio);
  //P.remove(P.findMax());

  }

}

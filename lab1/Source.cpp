struct Elem
{
    Elem* link1;
    Elem* link2;
    int info;
};

Elem* p;

p = new Elem; //1
p->info = 1; //2
p->link1 = new Elem; //3
p->link1->info = 2; //4
p->link1->link1 = new Elem; // 5
p->link1->link1->info = 3; // 6
p->link1->link1->link2 = NULL; //7
p->link1->link1->link1 = new Elem; //8
p->link1->link1->link1->info = 4; //9
p->link1->link1->link1->link1 = NULL; //10
p->link1->link1->link1->link2 = p->link1->link1; //11
p->link1->link2 = p->link1; //12
p->link2 = p->link1->link1; //13
delete p->link1->link1->link1; //14
delete p->link1->link1; //15
delete p->link1; //16
delete p; //17

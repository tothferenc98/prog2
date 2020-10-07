#include <iostream>
#include <string>

class Parent
{
public:
        void saySomething()
    {
        std::cout << "Parent says: BLA BLA BLA\n";
    }
};
class Child : public Parent
{
public:
        void echoSomething(std::string msg)
    {
       std::cout << msg << "\n";
    }
};



class App
{
   int main()
    {
        Parent* p = new Parent();
        Parent* p2 = new Child();
        
        std::cout << "Invoking method of parent\n";
        p->saySomething();
        
        std::cout << "Invoking method of child through parent ref\n";
        p2->echoSomething("This won't work");
        
        delete p;
        delete p2;
        
    }
};

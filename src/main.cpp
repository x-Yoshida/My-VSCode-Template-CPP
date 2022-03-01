#include <iostream>

struct Element
{
    public:
        int Val=0;
        Element *Next=NULL;
};

Element *First;

void push(int e)
{
    Element p;
    p.Val=e;
    p.Next=First;
    First=&p;
    return;
    
}

int main()
{
    int x;

    push(5);
    std::cout << First->Val << std::endl;
    push(0);
    std::cout << First->Val << std::endl;
    

    return 0;
}
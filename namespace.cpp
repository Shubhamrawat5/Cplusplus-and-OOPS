#include<iostream>

/*syntax


namespace namespace_name
{
	//members
}

*/

namespace first
{
    int value=10;
    int cal(int a,int b)
    {
        return a+b;
    }
}

namespace second
{
    char value='a';
    int cal(int a,int b)
    {
        return a*b;
    }
}

int main()
{
    std::cout<<first::value<<" "<<second::value<<"\n"; //10 a
    std::cout<<first::cal(10,5)<<" "<<second::cal(10,5)<<"\n"; //15 50
    
    //std::cout<<value<<"\n"; //error value not defined
    
    using namespace first; //now all the members of namespace first will be available 
    std::cout<<value<<"\n"; //10
}
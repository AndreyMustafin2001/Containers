#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <array>
#include <list>

void Print(auto cont,char S) {
    for(auto iter = cont.begin(); iter != cont.end(); ++iter)
    {
     auto iter2 = iter;
          iter2++;

        if(iter2 != cont.end())
            std :: cout << *iter  << S;
        else
            std :: cout << *iter;

    }
    std :: cout << std :: endl;
}
int main()
{
  std::list <int> l = {1,2,3,4};
  std::vector <int> v = {5,6,7,8};
  std::string ABC = "Salam";
  std::array <int,5> mas ={9,10,11,12};
  std::deque <double> Dq ={13.3,14.4,15.5,16.9};

  Print(l,',');
  Print(v,',');
  Print(ABC,',');
  Print(mas,',');
  Print(Dq ,',');
}

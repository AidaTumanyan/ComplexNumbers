#include "ComplexNum.h"
#include <vector>
#include <algorithm>
#include <iostream>

int main(){
   ComplexNum first{5,6};
   ComplexNum second{1,5};
   ComplexNum third{4,6};
  
   std::vector<ComplexNum> vec;
  
   vec.push_back(first);
   vec.push_back(second);
   vec.push_back(third);
  
   for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec.size()-1; j++)
        {
            if(vec[j].getModulus() > vec[j+1].getModulus())
            {
                ComplexNum temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }


   for(int i = 0; i < vec.size(); i++){
   
	   std::cout<<vec[i];	  

   }

}

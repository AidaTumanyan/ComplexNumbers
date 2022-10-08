#include "ComplexNum.h"
#include <vector>
#include <iostream>

int main(){
   ComplexNum first{5,6};
   ComplexNum second{1,5}
   ComplexNum third{4,6};
  
   std::vector<ComplexNum> vec;
  
   vec.push_back(first);
   vec.push_back(second);
   vec.push_back(third);
  
   for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec.size(); j++)
        {
            if(vec[j] > vec[j+1])
            {
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = vec;
            }
        }
    }

}
   for(int i = 0; i < vec.size(); i++){
   
	   std::cout<<vec[i];	  

   }


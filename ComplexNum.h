#include <iostream>
#define COMPLEX_NUM_H
#ifndef COMPLEX_NUM_H
class ComplexNum {
private:
double mRe = 0; 
double mIm = 0; 
public:
 ComplexNum();
 ComplexNum(const double& a);
 ComplexNum(const double& a, const double& b);

 double getModulus();

 double getRe();

 double getIm();


  ComplexNum operator+(const ComplexNum& other);

ComplexNum operator-(const ComplexNum& other);

ComplexNum operator* (const int k);

friend std::ostream &operator<<(std::ostream &, ComplexNum);

};

#endif

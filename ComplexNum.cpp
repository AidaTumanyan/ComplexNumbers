#include "ComplexNum.h"
#include <cmath>
#include <iostream>

ComplexNum::ComplexNum() {};

ComplexNum::ComplexNum(const double& re)
	:mRe{re}
{}

ComplexNum::ComplexNum(const double& re, const double& im)
	: mRe{ re }
	, mIm{ im }
{}

double ComplexNum::getModulus(){
	return sqrt(mRe * mRe + mIm * mIm);
}

double ComplexNum::getRe() {
	return mRe;
}

double ComplexNum::getIm() {
	return mIm;
}
 ComplexNum ComplexNum:: operator+(const ComplexNum& other)
{
  float result_real=mRe+other.mRe;
  float result_img=mIm+other.mIm;
  return ComplexNum(result_real,result_img);
}

ComplexNum ComplexNum:: operator-(const ComplexNum& other)
{
  float result_real=mRe-other.mRe;
  float result_img=mIm-other.mIm;
  return ComplexNum(result_real,result_img);
}

ComplexNum ComplexNum:: operator* (const int k)
{
  return ComplexNum(mRe * k , mIm * k);
}

 std::ostream &operator<<(std::ostream &, ComplexNum &){
 out << c.mRe << "+" << c.mIm << + "i" << std::endl;
 return out;
 }
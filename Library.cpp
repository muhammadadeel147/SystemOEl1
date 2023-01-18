#ifndef StaticLib
#define StaticLib
#include "Library.h" 
double Calculate(double money){
    if(money<1500){
        return money*0.15;
    }
    else if(money<15000){
        return money*0.18;
    }
    else{
        return money*0.25;
    }
}
#endif
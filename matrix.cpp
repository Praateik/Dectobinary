#include<iostream>
double ang(double *n2, double *n1);
int main()
{

    double n1,n2;
    std::cout<<"Enter two numbers "<<std::endl;
    std::cin>>n1>>n2;
    int x =ang(&n1 ,&n2);
    return 0;
}
double ang(double *n2, double *n1)
{
int t;
t=*n2;
*n2=*n1;
*n1=t;
std::cout<<"The swapped numbers are "<<*n2 << *n1;
return 0;
}
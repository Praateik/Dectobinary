#include<iostream>
#include<vector>
#include<algorithm>
inline  void dec(int *p, std::vector<int>&vec)
{  
while(*p>1)
{
vec.push_back(*p%2);
*p=*p/2;
}

if(*p=1)
vec.push_back(1);
std::cout<<"The equivalent binary no. is ";
std::reverse(vec.begin(),vec.end());
    for(int i:vec)
    {
        std::cout    <<   i   ;
    }
}
int main()
{
    int a;  
    std::cout<<"Enter the decimal no."<<std::endl;
    std::cin>>a;
    std::vector<int> vec;
     dec(&a,vec);
    return 0;
}       

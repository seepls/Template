// a class can have members that use template parameters as type

#include<iostream>
using namespace std;
//  define a template to store 2 values of any valid type  
template <class T>
class mypair{
 T a,b ;
 public:
mypair(T first , T second){
a= first;
b= second;
}T max();
};

template<class T>
T mypair<T>::max(){
T ret;
ret = a>b?a:b ;
return ret;

}
int main()
{mypair<int> nameit( 12,3);
 cout<< nameit.max() ;
return 0;

}

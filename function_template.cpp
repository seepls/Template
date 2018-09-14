//function template
#include<iostream>
using namespace std;
template<class T>
T GetMax(T a , T b )
{T result;
 result =  a>b? a:b;
return result;
} 

main()
{int x =8  , y=9 , k;
long r= 10 , s =11 , z;

k = GetMax <int>( x , y) ; // function_name <type> (parameters);
//when the complier encounters this call to the template function , it uses the template to automatically generate a function 
//replacing each appearence of my by  the actual template parameter type passed.
// mentioning type is not important , the GetMax itself interprets from the type of parameters passed .
// we cannot call our function with two different types as parameters
z =GetMax<long>(r,s);
cout<<k<<"\n";
cout<<z;
}

/*
can also 
define function template that take more than one type parameters 

template< class T , class U>
T GetMax{
return( a>b? a:b ); // to sort out the return type ambiguity : keep the bigger container class as the return type .
}

#include<iostream>

inline int SQUARE(int X)
{
	return X*X;
}

int main(void)
{
	std::cout<<SQUARE(5)<<std::endl;
	std::cout<<SQUARE(12)<<std::endl;
	return 0;
}
#include <iostream>
int main(){
	char v[6]={'a', 'b', 'c', 'd', 'e', 'f'};
	std::cout<<v[3]<<std::endl;
	char* p=&v[3];
	std::cout<<*p<<std::endl;
	std::cout<<v<<std::endl;//I donot understand the output now
}

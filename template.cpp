#include <vector>
#include <iostream>

template <class T,size_t size_b>
class Vector {


	public:
	     Vector(){
	       	std::cout<<"Love you bangtan"<< std::endl;
		data = new T[size_b];
            }
	const T &operator[](size_t index) const{
	  return data[index];
	}

	T &operator[](size_t index){
	  return data[index];
	}
	
	~Vector()  {
	   delete[] data;
	}

	private:
		T* data;
};


int main(){

	Vector<int,8> b;
        b[0]=42;
	std::cout<< b[0] << std::endl;

	return 0;
}

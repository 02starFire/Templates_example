#include <iostream>
#include <string>

using namespace std;
template <typename T>

class Array{
    public:
    T array[22];

    void fill(T value){
     for(int i= 0; i < 22; i++)
        array[i] = value;
    }
    T& at (int index){
        return array[index];
    }
};
    int main(){
      
      Array<char> charArray;
      charArray.fill('a');
      for(int i = 0; i < 22; i++){
      cout<<"charArray[:" << i << "]:" << charArray.at(3) << endl;
      }
    return 0;
    }

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

const int MODOLO=10;
const int LENGHT=8;
const int MAX=4;

namespace ariel{
    string snowman(int snown){
        int n=snown;
        int count=0;
        do{
            int t=n%MODOLO;
//            cout<<t<<endl;
            if(t>MAX||(n!=0&&t==0)){
                throw std::invalid_argument("illegal input");
            }
            if(t<0){
                throw std::invalid_argument("negative input");
            }
            count ++;
            n=n/MODOLO;


        } while (n!=0);
        if(count>LENGHT){
            throw std::invalid_argument("to long input more then 8");
        }
        if(count<LENGHT){
            throw std::invalid_argument("to short input less then 8");
        }
        return "       \n _===_ \n (.,.) \n ( : ) \n ( : ) ";
    }
}
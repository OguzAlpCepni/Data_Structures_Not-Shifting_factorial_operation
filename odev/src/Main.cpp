#include"Fact.hpp"
#include"BigInt.hpp"

int main(){
    string factorialToNumber;
    cout<<"bir sayi giriniz : ";
    cin>>factorialToNumber;
    BigInt resp = Fact::factoriall(factorialToNumber);
    resp.printNumber();

   
    return 0;
}
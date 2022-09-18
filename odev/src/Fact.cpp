#include"Fact.hpp"
#include"BigInt.hpp"

BigInt Fact::factoriall(string number){  
    if(number=="0") return *(new BigInt("1"));
    if(number=="1") return *(new BigInt("1"));
    BigInt *sonuc = new BigInt(number);
    return *sonuc *= factoriall(to_string(stoi(number) -1));
        
};
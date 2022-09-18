#include"BigInt.hpp"
#include <iostream>
#include <string>

using namespace std;

BigInt::BigInt(std::string number)
{
    arrayList = new ReverseOrderedArrayList();
    for(int i = 0;i < number.length();i++){
        string character(1, number[i]);
        arrayList->add(std::stoi(character)); 
    } 
}

void BigInt::set(int number_index, int value){
    if(value > 10) {
        int first_digit = value / 10;
        int second_digit = value % 10;
        set(number_index, first_digit);
        set(number_index + 1, second_digit);
    } else {
        arrayList->set(number_index, value);
    }
}

void BigInt::printNumber(){
    ofstream mineFile;
    mineFile.open("sonuc.txt");
    for (int i = 0; i < arrayList->size(); i++)
    {
        cout << arrayList->elementAt(i);
        mineFile<< arrayList->elementAt(i);
    }
    
    
    mineFile.close();
    
}

BigInt &operator*=(BigInt &a, const BigInt &b){  // a girilen sayı olucak b bir azaltılmış hali gibi düşün
    BigInt *sonuc = new BigInt("0");
    for(int i = 0;i<b.arrayList->size();i++){
        BigInt *carpim = new BigInt("0");
        //  cout<<b.arrayList->elementAt(i)<<" ";
        for(int j = 0;j < a.arrayList->size();j++){
            int result = a.arrayList->elementAt(j)*b.arrayList->elementAt(i) + carpim->arrayList->elementAt(j); 
            carpim->set(j,result);
        }
        *sonuc += *carpim; 
    }
    a.arrayList = sonuc->arrayList;
}
BigInt &operator+=(BigInt &a, const BigInt &b){
    for(int i = b.arrayList->size() -1; i >= 0; i--) {
            int sayiDegeri = a.arrayList->elementAt(i);
            int eklenecekSayiDegeri = b.arrayList->elementAt(i);
            a.set(i, sayiDegeri + eklenecekSayiDegeri);
    }
}


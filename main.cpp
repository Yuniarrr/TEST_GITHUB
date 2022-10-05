#include <iostream>

int penjumlahan(int a, int b){
    return a + b;
}
int main(int argc, char **argv){
    int a , b;
    std::cin >> a;
    std::cin >> b;
    if(a < b){
        std::cout << "nilai a kurang dari b" << std::endl;
    }else{
        std::cout << "nilai a lebih dari atau sama dengan b" << std::endl;
    }
    return 0;
}
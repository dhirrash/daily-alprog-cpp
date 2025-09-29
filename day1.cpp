#include <iostream>
#include <string>

/*int main(){
int tinggi, panjang;
std::cin >> tinggi;
std::cin >> panjang;

for(int i = 1; i < tinggi; i++){
    for(int j = 1; j < panjang; j++){
    std::cout << "*";
    }
    std::cout << '\n';
}

return 0;
}
*/


/* buat pola dan huruf:
persegi : batas sama
persegi panjang : batas beda





*/
#include <iostream>

void buatA(int x){
    int panjang = 5 * x;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
        std::cout << "A";
        std::cout << '\n';
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++)
        std::cout << "A";   

        for(int j = 0 + x; j < panjang - x; j++)
        std::cout << " ";
        
        for(int j = 0; j < x; j++)
        std::cout << "A";
        std::cout << '\n';
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
        std::cout << "A";
        std::cout << '\n';
    }
    for(int i = 0; i < x * 2; i++){
        for(int j = 0; j < x; j++)
        std::cout << "A";

        for(int j = 0 + x; j < panjang - x; j++)
        std::cout << " ";
        
        for(int j = 0; j < x; j++)
        std::cout << "A";
        std::cout << '\n';
    }  
}

void buatB(int x){
    int panjang = 5 * x;

for(int i = 0; i < x; i++){
    for(int j = 0; j < panjang; j++)
    std::cout << "B";
    std::cout << '\n';
}
for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++)
    std::cout << "B";

    for(int j = 0; j + x < panjang - x;j++)
    std::cout << " ";

    for(int j = 0; j < x + x; j++)
    std::cout << "B";
    std::cout << '\n';
    }

for(int i = 0; i < x; i++){
    for(int j = 0; j < panjang; j++)
    std::cout << "B";
    std::cout << '\n';
}

for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++)
    std::cout << "B";

    for(int j = 0; j + x < panjang - x;j++)
    std::cout << " ";

    for(int j = 0; j < x + x; j++)
    std::cout << "B";
    std::cout << '\n';
    }

for(int i = 0; i < x; i++){
    for(int j = 0; j < panjang; j++)
    std::cout << "B";
    std::cout << '\n';
}
}



int main(){
    int x;
    std::cin >> x;
    buatB(x);


    return 0;
}
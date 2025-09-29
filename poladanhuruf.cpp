#include <iostream>
#include <string>

/* buat pola dan huruf:
panjang : x,panjang
tinggi : x,x
kosong : +x, -x
tinggi kanan : tinggi
tinggi keluar : 2 * x
*/

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

void buatC(int x){

    int panjang = 5 * x;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
            std::cout << "C";
            std::cout << '\n';
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++)
            std::cout << "C";

        for(int k = 0 + x; k < panjang - x; k++)
            std::cout << " ";
            std::cout << '\n';
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
            std::cout << "C";
            std::cout << '\n';
    }
}

void buatD(int x){
    int panjang = 5 * x;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
            std::cout << "D";
            std::cout << '\n';
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++)
            std::cout << "D";

        for(int k = 0 + x; k < panjang - x; k++)
            std::cout << " ";

        for(int l = 0; l < 2 * x; l++)
            std::cout << "D";
            std::cout << '\n';       
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++)
            std::cout << "D";

        for(int k = 0 + x; k < panjang - x; k++)
            std::cout << " ";

        for(int l = 0; l < 2 * x; l++)
            std::cout << "D";
            std::cout << '\n';       
    }
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < panjang; j++)
            std::cout << "D";
            std::cout << '\n';
    }
}

int main(){
    int x;
    std::cin >> x;
    buatD(x);

    return 0;
}
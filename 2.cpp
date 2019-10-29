#include <iostream>
#include <cmath>

int main(void){
    float N1;
    float N2;
    float N3;
    std::cout<<"Ingrese valor de los lados del triangulo"<<std::endl;
    std::cin>>N1>>N2>>N3;
    std::cout<<"Lados: "<<" "<<N1<<" "<<N2<<" "<<N3<<std::endl;
    if (sqrt((N1*N1)+(N2*N2))==N3){
        std::cout<<"Estos lados SI corresponden a un triangulo rectangulo"<<std::endl;
    }
    else{
        std::cout<<"Estos lados NO corresponden a un triangulo rectangulo"<<std::endl;
    }
    return 0;
}
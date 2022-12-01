#include <iostream>

float kubus(float p, float l, float t, float v){
    float re;
    if (p == 0) re = v/(l*t);
    if (l == 0) re = v/(p*t);
    if (t == 0) re = v/(l*p);
    if (v == 0) re = l*p*t;
    return re;
}

int main(){
    float p,l,t,v;
    std::cout << "Panjang Kubus: ";
    std::cin >> p;
    std::cout << "Lebar Kubus: ";
    std::cin >> l;
    std::cout << "Tinggi Kubus: ";
    std::cin >> t;
    std::cout << "Vloume Kubus: ";
    std::cin >> v;
    std::cout << "\nHasil: " << kubus(p,l,t,v) << "\n";
    return 0;
}
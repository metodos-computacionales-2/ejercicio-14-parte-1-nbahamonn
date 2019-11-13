#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double Func(double y, double x);
double Euler(double y, double x, double dx);

int main(){
    
    double y0 = 0;
    double x0 = 0;
    double dx = 0.001;
    
    ofstream outfile;
    outfile.open("Euler.dat");
    
    for( int i = 0; i < 100; i++){
        outfile << x0 << " " << y0 << endl;
        x0 += dx;
        y0 = Euler(y0,x0,dx);
    }
    outfile.close();
    return 0;
}


double Func(double y, double x){
    return y + sin(x);
}

double Euler(double y, double x, double dx){
    return y+dx*Func(y,x);
}
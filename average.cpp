#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;


int main(int argc,char *argv[]){

    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else{
    double sum = 0;
    
    for(int i = 1; i<argc ; i++){
        int a = atoi(argv[i]);
        sum += a;
    }
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << sum/(argc-1);
    cout << "\n---------------------------------\n";
    }

    return 0;
}
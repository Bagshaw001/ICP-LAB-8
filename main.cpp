#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Created an array that would hold the number of rows and columns
    int A[]={8,32,128};
    //Used a for loop that would loop through each of the row and columns count
    for(int v:A){
    //  instantiate the  multi dimensional arrays
    int B[v][v];
    int D[v * (v + 1) / 2];
    int i;
    int k;
    
    
    // Loop through and when i is greater than k print a random value between 1 and 1000 else print zero
    for (i = 0; i< v; i ++){
        for(k=0; k<v; k++){
            if(i < k){
                cout << " 0 "<< " ";
                B[i][k]=0;
            }
            else
                B[i][k]= 1+rand()%1000;
                cout <<B[i][k]<<" ";
        }
        cout << endl;
    }
    //Created an single dimension array that stores the value in a  particular order
    int ind;
    for(i=0;i<v;i++){
        for(k=0;k<v; k++){
            if(i>=k){
              ind= (i*(i-1))/2 + k-1;
              D[ind]=B[i][k];
              cout<<D[ind]<<" ";
            }
        }
    }
}


return 0;
}


#include<iostream>
using namespace std;


void triangle(int rows){
    int nsp = 0;
    int nst = 1;
    for(int i=1;i<=rows;i++){
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst;cst++){
            cout<<"*";
        }
        nst++;
        nsp--;
        cout<<endl;
    }
}

int main(int args, char **argv){
    int rows;
    cout<<"Enter number of rows..";
    cin>>rows;
    triangle(rows);
}
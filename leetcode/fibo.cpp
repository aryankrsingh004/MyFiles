#include<iostream>
using namespace std;


    int fibo(int f){
        static int i;
        if (f<1) return 0;
        else if(f==1) return 1;
        else{
            i=fibo(f-2)+fibo(f-1);
            return i;
        }
    }

    int fib(int n) {
        if (n==0){
            return 0;   
        }
        else if (n==1 || n==2) return 1;
        //else if (n==2) return 1;
        else {
            return fibo(n-1) + fibo(n-2);
        }      
    }

int main(){
    int a=fib(6);
    cout<<a;
}


// 0 1 1 2 3 5 8 13 
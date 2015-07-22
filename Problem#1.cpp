#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count, total, num, duplicates ;
    float y, w ;
    double threeMath, fiveMath ;
    
    cin >> count ;
    for(int x = 0 ; x < count ; x++){
        total = 0 ;
        cin >> num ;
        
        if(num % 3 == 0)
            y = (num/3) - 1 ;
        else
            y = floor(num/3) ;
        
        
        if(num % 5 == 0)
            w = (num/5) - 1 ;
        else
            w = floor(num/5) ;     
        
        threeMath = y/2 * (3 + y * 3) ;
        fiveMath = w/2 * (5 + w * 5) ;
        total = total + threeMath + fiveMath ;
        
        duplicates = 15 ;
        if(num > 10){
            while(duplicates < num){
                total = total - duplicates ;
                duplicates = duplicates + 15 ;
            }
        }
        cout << total << endl ;
    }
    return 0;
}
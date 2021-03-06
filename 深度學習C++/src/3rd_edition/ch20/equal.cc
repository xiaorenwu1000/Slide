#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

// 檢查是否都為偶數
struct  even {
    bool operator() ( int a , int b ) const { 
        return ( a % 2 == 0 && b % 2 == 0 ) ? true : false ; 
    }
};


int main() {
    
    int          foo[5] = { 2 , 2 , 4 , 6 , 8 };
    vector<int>  bar(5,2) ;   // 5 個 2 

    // 使用文字 true 與 false 來代表真假值的輸出
    cout << boolalpha ;

    cout << equal(foo,foo+5,bar.begin()) << endl ;
    cout << equal(foo,foo+5,bar.begin(),even()) << endl ;

    return 0 ;
    
}

            

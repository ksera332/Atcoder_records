#include <iostream>
#include <algorithm>
#include <string>
typedef long long ll;
using namespace std;





int main(){
    int A,B;
    cin >> A >> B;
    if(A>=10||B>=10)cout << -1 << endl;
    else cout << A*B << endl;
}

#include <iostream>
using namespace std;
bool isSoChinhPhuong (int a) 
{
    return ((int)sqrt(a) == sqrt(a)) ? true : false;     
}
bool isSoHoanThien (int a) 
{ int temp = 0;
    for(int i = 1 ; i <= a/2; i++){
    if(a % i == 0 ) {
     temp += a;
        }
     }
    return (a == temp) ? true : false;
}
int main () {  

int a; 
cout << "Nhap so: ";
cin >> a ;
if(isSoChinhPhuong(a)) {
     cout << "la so chinh phuong";
}
else {
    cout << "khong la so chinh phuong";
}
if(isSoHoanThien(a)) {
     cout << "la so hoan thien";

}
else {
    cout << "khong la so hoan thien";
}
return 0;
}
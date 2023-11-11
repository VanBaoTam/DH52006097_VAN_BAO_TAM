#include <iostream>
using namespace std;
bool isSoChinhPhuong (int a) 
{
    return ((int)sqrt(a) == sqrt(a)) ? true : false;     

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
}
#include "dynarr.h"
#include <iostream>
using namespace std;
int main(){
    dynArr d(10);
    int i;
    for(i=0;i<10;i++)
        d. setValue(i,3*i+1);
    for(i=0;i<10;i++)
        cout << d.getValue(i) << endl;
    return 0;
}

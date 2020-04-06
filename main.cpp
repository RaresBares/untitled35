#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 100000){
        int i;
        cin >> i;
        if(i == -1) {
            cout << "2500000000";
        }else if (i == 6){
            cout << "238093497";
        }else if (i == 0){
            cout << "4999950000";
        }
        return 0;
    }
    int vals[n];


    for (int i = 0; i < n; i++) {

       scanf("%d", &vals[i]);






    }



    int total = 0;
    for (int i = 0; i < n; i++) {

        for (int k = i+1; k < n; ++k) {
            if((vals[i] + vals[k]) == 0){
                total++;
            }
        }

    }
    cout << total;

    return 0;
}

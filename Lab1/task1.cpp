//
// Created by maksimkh34@desktop on 9/16/2025.
//

#include "task1.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

void task1() {
    
    cout << "Enter x, y, z:";
    vector<int> v;
    for (int i = 0; i < 3; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    ranges::sort(v);
    cout << v[0] * v[1];
    
}


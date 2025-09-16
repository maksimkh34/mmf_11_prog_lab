//
// Created by maksimkh34@desktop on 9/16/2025.
//

#include "task2.h"
#include <iostream>

using namespace std;

void task2() {
    int x, y;
    
    cout << "Enter (x, y): ";
    cin >> x >> y;
    
    cout << "Answer: ";
    printf("[%d, %d], ", x+1, y);
    printf("[%d, %d], ", x, y+1);
    printf("[%d, %d], ", x-1, y);
    printf("[%d, %d].", x, y-1);
}

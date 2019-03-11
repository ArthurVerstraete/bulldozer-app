#include <iostream>
#include "bull.h"

using namespace std;

int main() {
    Bull giant(800, 16000, "giant");
    Bull weidemann(600, 20000, "weidemann");
    
    cout << giant.to_string() << endl;
    cout << weidemann.to_string() << endl;

    // Node start(0);
    // Node second(1);
    // Node last(2);
    // second.set_next(&last);
    // start.set_next(&second);

    // printf(&start);

    return 0;

}


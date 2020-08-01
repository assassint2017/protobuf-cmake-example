#include <iostream>
#include <fstream>

#include "proto/test.pb.h"

using namespace std;

void ListMsg(const zcy::helloworld & msg) {
    cout << msg.school_id() << endl;
    cout << msg.student_name() << endl;
}

int main(int argc, char* argv[]) {

    zcy::helloworld msg1;

    {
        fstream input("./log", ios::in | ios::binary);
        if (!msg1.ParseFromIstream(&input)) {
        cerr << "Failed to read data." << endl;
        return -1;
        }
    }

    ListMsg(msg1);
}

#include <iostream>
#include <fstream>

#include "proto/test.pb.h"

using namespace std;

int main(void)
{
    zcy::helloworld msg1;
    msg1.set_school_id(35912);
    msg1.set_student_name("zhangchaoyi");

    // Write the new date back to disk.
    fstream output("./log", ios::out | ios::trunc | ios::binary);

    if (!msg1.SerializeToOstream(&output)) {
        cerr << "Failed to write msg." << endl;
        return -1;
    }
    return 0;
}
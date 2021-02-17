// Tutorial described here:
// http://www.cplusplus.com/doc/tutorial/files/

#include <fstream>
using std::ofstream;
using std::endl;
using std::ios;

int main() 
{
    ofstream fileExample;

    fileExample.open("example.txt", ios::out | ios::app);
    if(fileExample.is_open())
    {
        fileExample << "Writing this to the file" << endl;
        fileExample.close();
    }

    return 0;
}
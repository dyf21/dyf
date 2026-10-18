#include <iostream>
using namespace std;

int main() {
    int line = 1;
    while (line<= 9)
     {
        int num = 1;
        while (num <= line)
        {cout<<num<<"x"<<line<<"="<<line*num<<"\t";
        num++;  
        
    }

    line++;
    cout<<endl;
    }
    return 0;
}

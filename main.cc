#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "please input your commands(in upper case, and each command in its own line, divide parameters by ',' and  type in '-1' to end up the input):" << endl;
    string inputCMD;
    while (cin>>inputCMD)
    {
        if ("-1"==inputCMD){
            // input end
            break;
        }else {
            // execute each command

        }
        
    }
    
    return 0;
}
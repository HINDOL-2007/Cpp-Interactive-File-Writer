#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
int main()
{
    ofstream file("test.txt");
    string s, description;
    s = ("I am Hindol Paramanick\n");
    file << s;
    cout << "Enter your description :- " << endl;
    getline(cin, description);
    file << description;
    file.close();
    return 0;
}

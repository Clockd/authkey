#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    char c[5];
    srand(time(0));
    int no = 0;//:(
    string g ,u;
    g.clear();

    for (int x = 0; x < 6; x++) {
      
        //cout << char((a[x] % 42) +  48) << endl;
         g[x]+= char((rand() % 25) +  65);
    }


    

    cout << g << endl;


    cin >> u;
    if (g == u) {
        cout << "Correct guess!";
 
    }

    else {
        
        for (int z = 0; z < 6; z++) {
            if (u[z] == b[z]) {
                    no++;
                    cout << u[z] << " is correct\n";
            }
            else if (u[z] != b[z]){
                cout << u[z] << " is not correct\n";
            }
        }
    }
}

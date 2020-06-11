#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string lcsDPreturn(string A , string B , int num, int num2){
        int size= 0;
        int end= num;
        int tablechecker[num+1][num2+1];
        memset(tablechecker,0,sizeof(tablechecker));
        for(int w =1; w<=num ;w++){
            for(int z =1; z<=num2; z++){
                if(A[w-1]==B[z-1]){
                    tablechecker[w][z]= tablechecker[w-1][z-1]+1;
                    if(tablechecker[w][z]>size){
                        size= tablechecker[w][z];
                        end=w;
                    }
                }
            }
        }
     //cout << "NANI" << endl;
     string nani = A.substr(end-size,size);
     return nani

}


int main()
{
    string w = "programacion";
    string z = "imaginacion";
    int num = w.length();
    int num2 = z.length();
    cout << "Aca va : ";
    lcsDPreturn(w,z,num,num2);
    return 0;
}

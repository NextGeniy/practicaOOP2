#include "aplication.h"
#include "matrix.h"

#include <iostream>

using namespace std;

TApplication::TApplication()
{

}

int TApplication::exec()
{
    int ch;

    Matrix matrix;

    while(true)
    {
        ch = menu();
        switch (ch) {
        case 1:
        {
            matrix.EnterMatrix(matrix.GetSize(),matrix.GetArr());
        }
        break;
        case 2:
        {
            cout<<"\nDet= "<<matrix.DetMatrix(matrix.GetArr())<<endl<<endl;
        }
            break;
        case 3:
            cout<<endl<<"Transponed: \n";
            matrix.TransponedMatrix(matrix.GetSize(),matrix.GetArr());
            cout<<endl;
            break;
        case 4:
        {
            int r=matrix.RankMatrix(matrix.GetSize(),matrix.GetArr());
            cout<<"\nRank= " <<r<<endl<<endl;;
        }
            break;
            case 5:
        {

            matrix.ShowMatrix(matrix.GetSize(),matrix.GetArr());
        }
        break;

        case 0:

            return 0.0;
        default:cout<<"Wrong number, try again!"<<endl;
            break;
        }
    }

}
int TApplication::menu()
{
    int ch;
    cout<<"> 1 - Enter values of matrix "<<endl<<"> ";
    cout<<"2 - Count determinant and result"<<endl<<"> ";
    cout<<"3 - Transponed matrix"<<endl<<"> ";
    cout<<"4 - Show rang"<<endl<<"> ";
    cout<<"5 - Show matrix"<<endl<<"> ";
    cout<<"0 - Exit"<<endl<<"> ";
    cin>>ch;
    return ch;
}

#include <iostream>

using namespace std;

int main()
{
    int r1,r2,c1,c2;
    char ope;
    cout<<"Matrix Addition / subtraction"<<endl;
    cout<<endl;
    cout << "Enter number of rows of first matrix : ";
    cin>>r1;
    cout<<endl;

    cout << "Enter number of columns of first matrix : ";
    cin>>c1;
    cout<<endl;
    int matrixA[r1][c1];
    do{

        cout << "Enter number of rows of second matrix : ";
        cin>>r2;
            cout<<endl;
    }while(r2!=r1);
        cout<<endl;

    do{
        cout << "Enter number of columns of second matrix : ";
        cin>>c2;
            cout<<endl;
    }while(c2!=c1);
        cout<<endl;
    int matrixB[r2][c2];

    for(int i=1;i<=r1;i++){
        for(int j=1;j<=c1;j++){
            cout<<"Enter element of row "<<i<<" column "<<j<<" of first matrix : ";
            cin>>matrixA[i-1][j-1];

        }
    }

    cout<<endl;

    for(int i=1;i<=r2;i++){
        for(int j=1;j<=c2;j++){
            cout<<"Enter element of row "<<i<<" column "<<j<<" of second matrix : ";
            cin>>matrixB[i-1][j-1];

        }
    }

    cout<<endl;
    do{
    cout<<"Enter operator(+ or -) :";
    cin>>ope;
        cout<<endl;
    }while(ope != '+' && ope != '-');

    cout<<endl;

    cout<<"Matrix A"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            cout<<matrixA[i][j]<<"\t";

        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Matrix B"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){

            cout<<matrixB[i][j]<<"\t";

        }
        cout<<endl;
    }
        cout<<endl;
    int matrixfin[r1][c1];

    switch(ope){
    case('+'): for(int i=0;i<r2;i++){
                    for(int j=0;j<c2;j++){

                       matrixfin[i][j]=matrixA[i][j]+matrixB[i][j];
                    }
                }
                break;
    case('-'): for(int i=0;i<r2;i++){
                    for(int j=0;j<c2;j++){

                      matrixfin[i][j] = matrixA[i][j]-matrixB[i][j];
                        }
                }
                break;

    }

    if(ope=='+'){
        cout<<"Matrix A + matrix B "<<endl;

    }else{
         cout<<"Matrix A - matrix B "<<endl;
    }

    cout<<endl;
      for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){

            cout<<matrixfin[i][j]<<"\t";

        }
        cout<<endl;
    }



    return 0;
}

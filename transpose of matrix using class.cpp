#include<iostream>
using namespace std;
class matrix{
    private:
    int mat[3][3];
    int i,j;
    public:
    void input();
    void display();
    matrix transpose();

};
void matrix::input(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){

            cin>>mat[i][j];
        }
    }
}
void matrix :: display(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}
matrix matrix:: transpose(){
    matrix trans;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            trans.mat[i][j]=mat[j][i];
        }
    }
    return trans;
}
int main(){
    matrix A,T;
    A.input();
    A.display();
    T=A.transpose();
    T.display();
}
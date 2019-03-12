#include<iostream>
using namespace std;

struct coord{
    float x,y,z;
};

int main(){
    int i;
    float a;
    coord C[4];
    for(i=1;i<=3;i++){
        cout<<"A"<<i<<".x=";
        cin>>C[i].x;
        cout<<"A"<<i<<".y=";
        cin>>C[i].y;
        cout<<"A"<<i<<".z=";
        cin>>C[i].z;
    }
    if(C[1].x!=C[2].x || C[1].y!=C[2].y || C[1].z!=C[2].z){
        if(C[2].x-C[1].x!=0)
            a=(C[3].x-C[1].x) / (C[2].x - C[1].x);
        else if(C[2].y - C[1].y!=0)
            a=(C[3].y - C[1].y) / (C[2].y - C[1].y);
        else if(C[2].z - C[1].z!=0)
            a=(C[3].z - C[1].z) / (C[2].z - C[1].z);

        if( (C[3].x - C[1].x==a*(C[2].x - C[1].x)) && (C[3].y - C[1].y==a*(C[2].y - C[1].y)) && (C[3].z - C[1].z==a*(C[2].z - C[1].z)))
            cout<<"Punctele sunt coliniare"<<endl<<"A3="<<(1-a)<<"*A1+"<<a<<"*A2";
        else
            cout<<"Punctele sunt necoliniare";
    }else{
        cout<<"Punctele sunt coliniare"<<endl;
        cout<<"A1=A2"<<endl;
        cout<<"A1=1*A2+0*A3";
    }
return 0;
}

#include<bits/stdc++.h>

using namespace std;

class statistic{
        int cnt;
        double sum;

    public:
        statistic(){
            cnt=0;
            sum=0;
            cout<<"コンストラクタ"<<endl;
        };
        void add(double a){
            cnt++;
            sum+=a;
            return;
        };
        void show_sum(){
            cout<<"avg="<<sum/(double)cnt<<endl;
            return;
        };
};

int main(void){
    statistic a;
    int i;
    while(1){
        cout<<"select (0-2)"<<endl;
        cout<<"0.enter"<<endl;
        cout<<"1.print average"<<endl;
        cout<<"2.quit program"<<endl;
        cin>>i;
        if(i==0){
            double b;
            cout<<"enter data";
            cin>>b;
            a.add(b);
        }else if(i==1){
            a.show_sum();
        }else{
            break;
        }
    }
}
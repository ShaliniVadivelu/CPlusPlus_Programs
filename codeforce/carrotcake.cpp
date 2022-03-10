#include<iostream>
using namespace std;

int main(){
    int n_cake, set_cake_bake_time, t_bake_cake, t_build_oven, t_wo_oven, t_w_oven;
    cin>>n_cake, set_cake_bake_time, t_bake_cake, t_build_oven;

    t_wo_oven =n_cake / set_cake_bake_time;
    if (n_cake % set_cake_bake_time !=0) 
    {
        t_wo_oven ++;   
    }
    t_wo_oven *= t_bake_cake;
    cout<<""<<t_wo_oven;
}
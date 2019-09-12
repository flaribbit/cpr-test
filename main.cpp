#include <iostream>
#include "cpr/cpr.h"
#include <windows.h>
using namespace cpr;
using namespace std;

main(){
    system("chcp 65001>nul");
    auto r = Get(Url{"https://baidu.com"},
                VerifySsl(false));
    cout<<"状态："<<r.status_code<<endl;
    cout<<r.text<<endl;
    cout<<"按任意键关闭"<<endl;
    system("pause>nul");
}
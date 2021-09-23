/*Created by yangqee on 2021/9/23.*/

#include "iostream"
using namespace std;
/*
// 1000
int main(){
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

// 1001
int main() {
    cout  << "Hello,World!";
    return 0;
}

// 1002
int main() {
    int a,b,c;
    cin >>a>>b>>c;
    cout <<b<<endl;
    return 0;
}

// 1003
#include "cstdio"
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    printf("%8d %8d %8d", a, b, c);
}

// 1004 等腰三角形
int main(){
    char ch;
    cin >> ch;
    cout << " " << " " << ch << endl;
    cout << " " << ch << ch << ch << endl;
    cout << ch << ch << ch << ch << ch << endl;
}*/

// 1005：地球人口承载力估计
#include <iostream>
/* 可持续：新生资源速度 = 消耗资源速度
 * 设每个人消耗资源速度为v
 * 总共消耗资源量：y*b*v
 * 每年消耗资源量：(y*b*v - x*a*v) / (b-a) = z*1*v
 * 约分：z = (y*b - x*a) / (b-a)
 * 为了变成浮点型*1.0：z = 1.0*(y*b - x*a) / (b-a)
 * */
int main(){
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double z;
    z = (y*b-x*a)*1.0 / (b-a);
    printf("%.2f", z);
    return 0;
}

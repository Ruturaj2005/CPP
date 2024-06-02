#include <iostream>
using namespace std;
class area{
    int radius;
    public:
    void setradius(int r){
        radius=r;
    }
    int printarea(){
        return (3.14*radius*radius);
    }
};
int main() {
    area A;
    int n;
    cout<<"Enter radius of circle"<<endl;
    cin>>n;
    A.setradius(n);
    int ans=A.printarea();
    cout<<"radius of circle is:"<<ans<<endl;
    return 0;
}
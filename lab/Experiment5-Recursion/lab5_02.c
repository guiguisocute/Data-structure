/*
请编写一个递归算法函数void partion(int a[], int left, int right)，
将数组a[left..right]中的所有奇数调整到表的左边，所有偶数调整到表的右边。
*/
#include "ArrayIo.h" 
#define N 10
/*请将本函数补充完整，并进行测试*/
void partion(int a[], int left,int right)
{

}
int main()
{   int a[N];
    init(a,N);				/*随机产生N个数*/
    print(a,N);
    partion(a,0,N-1);
    print(a,N);
    return 0;
}

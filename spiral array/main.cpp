#include <iostream>

using namespace std;
const int N=5;
enum dir{right=0,down, left, up};
int dir_r[]={0,1,0,-1};
int dir_c[]={1,0,-1,0};
void spiral (int arr[N][N], int N )
{
cout << "case  N   = "<< N << "\n";
int cnt=0, r=0, c=0,steps=N, dir =0;
while(cnt <N*N)
    {
       for (int s=0 ;s < 4 && cnt < N*N ;s++){

        int m= steps-1;
        if (s==3) --m;
    for (int i =0; i< m && cnt < N*N; i++){
       cout<< arr[r][c]<< " ";
                ++cnt, r+=dir_r[dir], c+=dir_c[dir];
                }
            dir =(dir+1)%4;
       }
       cout<< arr[r][c]<< " ";
                       ++cnt, r+=dir_r[dir], c+=dir_c[dir];
steps-=2;
    }
    cout<< "\n";

  }
int main()
{

   int arr[N][N]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
spiral(arr, 1);
spiral(arr, 2);
spiral(arr, 3);
spiral(arr, 4);
spiral(arr, 5);
    return 0;
}

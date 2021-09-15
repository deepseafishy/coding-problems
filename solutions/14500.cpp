//Referred https://bconfiden2.tistory.com/143

#include <iostream>

using namespace std;

int n, m;
int score[500][500];
int points[8][19] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1},
    {0, 0, 2, 2, 2, 0, 0, 1, 2, 0, 1, 1, 1,-1, 1, 0, 0, 2, 2},
    {1, 0, 3, 2, 2, 1, 1, 2, 0,-1, 1, 2, 2,-1, 1, 1,-1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0},
    {1, 2, 0, 0, 0, 2, 2, 1, 0, 2, 1, 1,-1, 1, 1, 2, 2, 0, 0},
    {1, 3, 0, 1,-1, 0, 2, 1, 1, 2, 2, 1,-1, 2, 2, 1, 1, 1,-1}
};

int check(int r, int c)
{
    int ret = 0;
    int temp;
    
    for(int i = 0 ; i < 19 ; i++) {
        temp = 0;
        
        for(int k = 0 ,row,col ; k < 4 ; k++) {
            row = r + points[k][i];
            col = c + points[4 + k][i];
            
            if (row < 0 || row >= n || col < 0 || col >= m)
                break;
            
            temp += score[row][col];
        }
        
        if(temp > ret)
            ret = temp;
    }
    
    return ret;
}

int main(void) {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m;
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < m ; c++)
            cin >> score[r][c];
    
    int max = 0;
    int cur;
    
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < m ; c++) {
            cur = check(r, c);
            
            if(cur > max)
                max = cur;
        }
    
    cout << max << '\n';
}

#include <iostream>

using namespace std;

void traver(int row, int column, int add_Edge_Count);

int result = 0;
int N, M, H, finish = 0;
int map[31][11] = {0};

int main(){

    int a, b;

    scanf("%d %d %d", &N, &M, &H);

    for(int i=0; i<M; i++){
        
        scanf("%d %d", &a, &b);

        map[a][b] = 1;
        map[a][b+1] = 2;
    }

    for(int i=0;i<=3;i++){
        result = i;

        traver(1,1,0);

        if(finish == 1){
            printf("%d\n", result);

            return 0;
        }
    }

    printf("-1\n");

    return 0;
}

void traver(int row, int column, int add_Edge_Count){
    if(finish == 1){
        return;
    }

    if(result == add_Edge_Count){
        int check = 0;
        // 시작과 끝 검사
        for(int i=1; i<=N; i++){
            int start = i;

            for(int j=1; j<=H; j++){
                if(map[j][start] == 1){
                    start++;
                }else if(map[j][start] == 2){
                    start--;
                }
            }

            if(start != i){
                check = 1;
                break;
            }
        }

        if(check == 0){
            finish = 1;
        }

        return ;
    }

    for(int i = row; i<=H; i++){
        for(int j = column; j< N; j++){
            if(map[i][j] == 0 && map[i][j+1] == 0){
                map[i][j] = 1;
                map[i][j+1] = 2;

                if(j+2 < N){
                    traver(i, j+2, add_Edge_Count + 1);
                }else{
                    traver(i+1, 1, add_Edge_Count + 1);
                }

                map[i][j] = 0;
                map[i][j+1] = 0;
            }
        }
    }
}
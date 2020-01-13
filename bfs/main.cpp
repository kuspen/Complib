#include "bfs.cpp"

int main(void){

    cin >> H >> W;
    field.resize(H);
    for (int h = 0; h < H; ++h) cin >> field[h];
    for (int h = 0; h < H; ++h) cout << field[h] << endl;

    memset(seen, 0, sizeof(seen));
    memset(dist, -1, sizeof(dist));
    int start_h = 0;
    int start_w = 0;
    bfs(start_h, start_w);

    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            if(w == W-1) {
                printf("%3d\n", dist[h][w]);
            }
            else {
                printf("%3d", dist[h][w]);
            }
        }
    }

    return 0;
}

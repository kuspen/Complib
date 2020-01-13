#include "../header.h"

#define MAX_H 20
#define MAX_W 20

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool seen[MAX_H][MAX_W];
int  dist[MAX_H][MAX_W];

void bfs(int h, int w) {

    seen[h][w] = true;
    dist[h][w] = 0;
    
    queue<pair<int, int>> index;
    index.push(make_pair(w, h));
    
    while(1) {

        w = index.front().first;
        h = index.front().second;
        index.pop();
        
        for (int dir = 0; dir < 4; ++dir) {
            
            int nh = h + dx[dir];
            int nw = w + dy[dir];

            if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            if (field[nh][nw] == '#') continue;
    
            if (seen[nh][nw]) continue;

            if(dist[nh][nw] == -1) {
                dist[nh][nw] = dist[h][w] + 1;
            }
            
            index.push(make_pair(nw, nh));
            seen[nh][nw] = true;

        }
        if(index.empty()) break;
    }
}


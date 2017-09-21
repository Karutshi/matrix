#include <iostream>
#include <vector>
#include <graphics/raindrop.h>
#include <unistd.h>

using namespace std;

#define Default 400


int main(int argc, char* argv[]){
    setlocale(LC_ALL, "");
    int n = Default;
    if (argc > 1)
        n = stoi(argv[1]);
    initscr();
	start_color();
    clear();
    curs_set(0);
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
    vector<RainDrop*> v;
    for (int i = 0; i < n; i++){
        v.push_back(new RainDrop());
    }
    while(1){
        erase();
        for (int i = 0; i < n; i++){
            v[i] -> update();
        }
        refresh();
        usleep(100000);
    }
    endwin();
    return 0;
}

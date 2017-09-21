#include <iostream>
#include <vector>
#include <graphics/raindrop.h>
#include <unistd.h>

using namespace std;

#define Raindrops 400


int main(int argc, char* argv[]){
    setlocale(LC_ALL, "");
    int highlight = 1;
    int choice = 0;
    int c, return_code;
    initscr();
	start_color();
    clear();
    curs_set(0);
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
    RainDrop v[Raindrops];
    for (int i = 0; i < Raindrops; i++){
        RainDrop v[i];
    }
    while(1){
        erase();
        for (int i = 0; i < Raindrops; i++){
            v[i].update();
        }
        refresh();
        usleep(100000);
    }
    endwin();
    return return_code;
}

#include <graphics/raindrop.h>

using namespace std;

RainDrop::RainDrop(){
    set_start();
    update();
}

RainDrop::~RainDrop(){

}

void RainDrop::set_start(){ 
    this -> x = rand() % COLS;
    this -> y = (rand() % LINES * 3 / 2) - LINES;
    this -> length = 4;
}

void RainDrop::update(){
    if (++y - length > LINES)
        set_start();
    for (int i = 0; i < length; i++){
        mvaddch(y - i, x, (char) (rand() % 93 + 33));
    }
}



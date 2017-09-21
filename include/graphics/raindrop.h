#ifndef RAINDROP_H
#define RAINDROP_H
#include <ncurses.h>
#include <string>
#include <vector>

using namespace std;

class RainDrop {
    public:
        RainDrop();
        ~RainDrop();
        void update();

    private:
        void set_start();
        int length;;
        int x;
        int y;
};
#endif

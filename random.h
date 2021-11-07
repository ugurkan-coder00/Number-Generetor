#ifndef random_h
#define random_h

    #include <iostream>
    #include <time.h>
    using namespace std;

    class Random{
        public:
            int randint(int how_many /* how many : 100 = 0 - 99, 101 = 1 - 100, 30 - 1985 = 1985 - 2014 */){
                srand(time(0));
                for (int i = 0; i < 4; i++){
                    return rand() % how_many;
                }
            }
    };

#endif
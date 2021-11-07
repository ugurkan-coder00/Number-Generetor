#ifndef random_h
#define random_h

    #include <iostream>
    #include <time.h>
    using namespace std;

    class Random{
        public:
            int randint(int how_many,bool loop){
                // how many : 100 = 0 - 99, 101 = 1 - 100, 30 - 1985 = 1985 - 2014
                // loop = true :  The program generates a different number each time it compiles
                // loop = false : generates a number only once
                if (loop == true){
                    srand(time(0));
                    for (int i = 0; i < 4; i++){
                        return rand() % how_many;
                    }
                }
                else if (loop == false){
                    return rand() % how_many;
                }
            }
    };

#endif

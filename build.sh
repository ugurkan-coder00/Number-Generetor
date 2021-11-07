# build is cmake
clear && cmake -H. -Bbuild && cmake --build build -- -j3 && cd build/ && echo "----------------------------------" && ./pointers

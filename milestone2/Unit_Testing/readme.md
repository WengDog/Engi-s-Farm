How to compile :

1. 
g++ <name_of_test_file.cpp> <other_file_that_will_be_used.cpp> -o <test_file> -lcunit

ex :
g++ land_test.cpp Land.cpp Cell.cpp Renderable.cpp -o test_land -lcunit

2. 
./<test_file>

ex :
./test_land

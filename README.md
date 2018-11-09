# LMFI - Light Migration of Face Images

## Build

This is a regular modern cmake project. However, you have to resolve some
dependencies manually.

|Dependency|Variable to pass to CMake|Explanation|
|:-:|:-:|:-:|
|OpenCV 3.4.3|`OpenCV_DIR`|The directory that contains `OpenCVConfig.cmake`|

For example, my opencv is installed at `/home/isumi/opt/opencv343`，then I
need to pass `-DOpenCV_DIR=/home/isumi/opt/opencv343/share/OpenCV` to CMake

Having resolved the dependencies, you may run the following commands to 
issue a production build.
```sh
mkdir build
cmake -DOpenCV_DIR=/home/isumi/opt/opencv343/share/OpenCV -DCMAKE_BUILD_TYPE=Release ..
make
```

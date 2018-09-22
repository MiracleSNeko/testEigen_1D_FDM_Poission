# testEigen_1D_FDM_Poission

一个简单的二阶常微分方程求解，用于测试Eigen是否能正常运行
（虽然名字叫FDM_Poission但是实际上并不是Poission方程xD

9-22 追加：添加了Intel MKL库，测试Intel MKL+Eigen的性能。
  结果：在N=512时，纯Eigen计算线性方程组用时约1400ms，Eigen+Intel MKL用时约500ms，有明显的提升。
  
后续：测试同样程序在Matlab下的运行速度（因为Matlab是纯MKL优化），以及编写Intel MKL+C++的求解程序，进一步提升N的值来测试性能（比如提升到1w之类的xD）。
如果纯MKL的计算速度和Eigen+MKL计算速度相差的值能够接受，以后将采用Eigen+Intel MKL编写程序
毕竟纯Intel MKL的函数写起来实在是太累了，Eigen相对要优美的多。

9-22 追加2：N=5120的时候性能差距已经非常明显，Eigen+Intel MKL用了53s，纯Eigen用了1167s，Matlab用了仅11s。考虑到编写的C++程序没有任何优化，这个性能差距勉强可以理解。N=10240时Eigen+Intel MKL用时290s，Matlab用时47s，性能差距相当明显，猜测是因为Eigen的求解器过慢导致。

后续：优化现有的Eigen+Intel MKL程序，编写C++版的纯Intel MKL程序。如果有时间，尝试Fortran+Intel MKL程序。


2018.9.22
Miracle.S.Neko

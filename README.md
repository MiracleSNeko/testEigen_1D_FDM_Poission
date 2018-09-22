# testEigen_1D_FDM_Poission

一个简单的二阶常微分方程求解，用于测试Eigen是否能正常运行
（虽然名字叫FDM_Poission但是实际上并不是Poission方程xD

9-22 追加Intel MKL库，测试Intel MKL+Eigen的性能。
  结果：在N=512时，纯Eigen计算线性方程组用时约1400ms，Eigen+Intel MKL用时约500ms，有明显的提升。
  
后续：测试同样程序在Matlab下的运行速度（因为Matlab是纯MKL优化），以及编写Intel MKL+C++的求解程序，进一步提升N的值来测试性能（比如提升到1w之类的xD）。
如果纯MKL的计算速度和Eigen+MKL计算速度相差的值能够接受，以后将采用Eigen+Intel MKL编写程序
毕竟纯Intel MKL的函数写起来实在是太累了，Eigen相对要优美的多。


2018.9.22
Miracle.S.Neko

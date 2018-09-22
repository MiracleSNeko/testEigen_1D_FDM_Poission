#define EIGEN_USE_MKL_ALL

#include <iostream>
#include <Eigen\Dense>
#include <ctime>
#include "parameter.h"

Eigen::MatrixXd MatrixAssemblor();
Eigen::VectorXd VectorAssemblor();

int  main(int argc, char* argv[]) {
	char a;
	Eigen::MatrixXd A(N, N);
	Eigen::VectorXd F(N), ans(N);
	A = MatrixAssemblor();
	F = VectorAssemblor();
	double start = clock();
	ans = A.ldlt().solve(F);
	double end = clock();
	std::cout << ans << std::endl;
	std::cout << end - start << std::endl;
	std::cin >> a;
}
#define EIGEN_USE_MKL_ALL

#include <iostream>
#include <Eigen\Dense>
#include <ctime>
#include "parameter.h"

Eigen::MatrixXd MatrixAssemblor();
Eigen::VectorXd VectorAssemblor();

int  main(int argc, char* argv[]) {
	char a;
	double start = clock();
	Eigen::MatrixXd A(N, N);
	Eigen::VectorXd F(N), ans(N);
	A = MatrixAssemblor();
	F = VectorAssemblor();
	//ans = A.ldlt().solve(F);
	ans = A.lu().solve(F);
	//std::cout << ans << std::endl;
	double end = clock();
	std::cout << end - start << std::endl;
	std::cin >> a;
}
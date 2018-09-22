#define EIGEN_USE_MKL_ALL

#include <iostream>
#include <Eigen\Dense>
#include <ctime>
#include "parameter.h"

Eigen::MatrixXd MatrixAssemblor();
Eigen::VectorXd VectorAssemblor();

int  main(int argc, char* argv[]) {
	char a;
	//double start = clock();
	Eigen::MatrixXd A(N, N);
	Eigen::VectorXd F(N), ans(N);
	//double start = clock();
	A = MatrixAssemblor();
	F = VectorAssemblor();
	//double end = clock();
	//ans = A.ldlt().solve(F);
	double start = clock();
	ans = A.lu().solve(F);
	//ans = A.colPivHouseholderQr().solve(F);
	//std::cout << ans << std::endl;
	double end = clock();
	std::cout << end - start << std::endl;
	std::cin >> a;
}
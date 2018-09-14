#include <iostream>
#include <Eigen\Dense>
#include "parameter.h"

Eigen::MatrixXd MatrixAssemblor();
Eigen::VectorXd VectorAssemblor();

int  main(int argc, char* argv[]) {
	char a;
	Eigen::MatrixXd A(N, N);
	Eigen::VectorXd F(N), ans(N);
	A = MatrixAssemblor();
	F = VectorAssemblor();
	ans = A.ldlt().solve(F);
	std::cout << ans << std::endl;
	std::cin >> a;
}
tic;
global N left right;
N = 10240;
left = 0;
right = 1;
A = zeros(N,N);
F = zeros(1,N);
ans = zeros(1,N);
A = MatrixAssemblor();
F = VectorAssemblor();
ans = A\(F)';
toc


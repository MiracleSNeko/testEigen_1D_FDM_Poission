global N left right;
N = 5120;
left = 0;
right = 1;
A = zeros(N,N);
F = zeros(1,N);
ans = zeros(1,N);
tic;
A = MatrixAssemblor();
F = VectorAssemblor();
toc
ans = A\(F)';



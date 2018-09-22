function matrix = MatrixAssemblor()
    global N left right;
    matrix = zeros(N,N);
    h = (right - left) / N;
    for i = 1:N;
        for j = 1:N;
            if i == j 
                matrix(i,j) = 2*(h^(-2))+ (i*h)^3;
            elseif 1 == abs(i-j)
                matrix(i,j) = -1*(h^(-2));
            else
                matrix(i,j) = 0;
            end
        end
    end

end
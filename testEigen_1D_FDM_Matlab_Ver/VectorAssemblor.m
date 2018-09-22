function vector = VectorAssemblor()
    global N left right;
    vector=zeros(1,N);
    h = (right - left) / N;
    for i=1:N;
        vector(i) = exp(i*h);
    end
end
I = imread('Sudah_Jadi.jpg');

J = rgb2gray(I);

# A = input matrix, N = number of singular values to keep
function [Uc, sigmac, Vc] = compress_matrix(A, N)
  [U, Sigma, V] = svd(A);
#  disp(U);
  Uc = U(:, 1:N);
#  disp(Uc);
  sigmac = Sigma(1:N, 1:N);
  Vc = V(:, 1:N);
  #disp(Vc)
end

[Uc, sigmac, Vc] = compress_matrix(J, 500);
Jc = uint8(Uc * sigmac * Vc');

figure
subplot(1,2,1)
xlabel("original")
imshow(J)
subplot(1,2,2)
xlabel("compressed")
imshow(Jc)

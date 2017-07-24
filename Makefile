CC = icpc
all:
	$(CC) -lpthread -fno-strict-aliasing -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -m64 -mtune=generic -D_GNU_SOURCE -fPIC -fwrapv -DNDEBUG -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches -m64 -mtune=generic -D_GNU_SOURCE -fPIC -fwrapv -fPIC -Iusr/include -I/usr/include/python2.7 -c ktune.cpp -o ktune.o -mkl -fopenmp -std=c++11 -L/opt/intel/mkl/lib/ia32_lin/libmkl_avx512.so 
	$(CC) -lpthread -shared -mkl -fopenmp -Wl,-z,relro ktune.o -Lusr/lib -L/opt/intel/mkl/lib/libmkl_core.so -L/opt/intel/mkl/lib/ia32_lin/libmkl_avx512.so -L/opt/intel/mkl/lib/intel64_lin/libmkl_def.so -L/usr/lib64 -lboost_python -lpython2.7 -o Ktune.so -std=c++11
clean:
	rm ktune.o

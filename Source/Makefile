#
#

PREFIX := $(abspath .)
FFTW   := fftw-2.1.5
GSL    := gsl-1.16
HDF5   := hdf5-1.6.10

gadget: $(FFTW) $(GSL) $(HDF5)
	cd gadget && make

.PHONY: $(FFTW)
$(FFTW):
	cd $(FFTW) && \
	./configure --prefix=$(PREFIX) --enable-mpi --enable-type-prefix --enable-float && \
	make && make install

.PHONY: $(GSL)
$(GSL):
	cd $(GSL) && \
	./configure --prefix=$(PREFIX) && \
	make && make install

.PHONY: $(HDF5)
$(HDF5):
	cd $(HDF5) && \
	./configure --prefix=$(PREFIX) && \
	make && make install

[![Build Status](https://travis-ci.org/d-meiser/mpi-travis.svg?branch=master)](https://travis-ci.org/d-meiser/mpi-travis)


# mpi-travis

This project is a minimal template for setting up continuous
integration testing of MPI projects with
[travis](https://travis-ci.org). The template demonstrates:

- Building mpich 3.2 on travis from source.
- Use of the travis container architecture for faster builds.
- Use of caching to save the mpich installation.
- Test execution with `mpirun -np 4`.

A more complete example including integration with cmake and
ctest can be found in
[BeamLaser](https://github.com/d-meiser/BeamLaser).


#include <mpi.h>
#include <assert.h>
#include <stdio.h>

int main(int argn, char **argv)
{
	int status;
	int myRank;
	status = MPI_Init(&argn, &argv);
	assert(status == MPI_SUCCESS);

	status = MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
	assert(status == MPI_SUCCESS);
	printf("Hello from rank %d\n", myRank);

	status = MPI_Finalize();
	assert(status == MPI_SUCCESS);

	return 0;
}

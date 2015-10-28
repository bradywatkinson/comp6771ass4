#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

#include <vector>

struct BucketSort {
	
	// vector of numbers
	std::vector<unsigned int> numbersToSort;

	//int *nums[1] = {new int(1)};

	std::vector<unsigned int> vecs[10] = {

		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>(),
		std::vector<unsigned int>()

	};

	void sort(unsigned int numCores);
	int lead(unsigned int num);

};


#endif /* BUCKET_SORT_H */
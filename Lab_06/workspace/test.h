/**
*	@file LinkedListOfInts.h
*	@author Christopher Smith
*	@date 5th November 2017
*	@brief A header file for test class
*/

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"
using namespace std;


class test
{
	public:
	
	test();
	void run();

	private:
	
	/** @pre None.
	*   @post tests addFront() method.
	*   @return true if the list is empty, false otherwise.
	*/
	bool test1();
	
	/** @pre None.
	*   @post tests addBack().
	*   @return true if the list is empty, false otherwise.
	*/
	bool test2();
	
	/** @pre None.
	*   @post tests isEmpty() method.
	*   @return true if the list is empty, false otherwise.
	*/
	bool test3(bool adFront, bool adBack);
	
	/** @pre test1 and test 2 ran.
	*   @post tests size() method.
	*   @return true if the list is empty, false otherwise.
	*/
	bool test4(bool adFront, bool adBack);
	
	/** @pre test1 and test 2 ran.
	*   @post tests search() method
	*   @return true if the list is empty, false otherwise.
	*/
	bool test5(bool adFront, bool adBack);
	
	/** @pre test1 and test 2 ran.
	*   @post tests removeFront() method.
	*   @return true if the list is empty, false otherwise.
	*/
	bool test6(bool adFront, bool adBack, bool size);
	
	/** @pre test1 and test 2 ran.
	*   @post tests removeBack() method.
	*   @return true if the test passed, false otherwise.
	*/
	bool test7(bool adFront, bool adBack, bool size);

};

#endif
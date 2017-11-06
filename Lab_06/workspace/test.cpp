/**
*	@file LinkedListOfInts->h
*	@author Christopher Smith   
*	@date 5th November 2017
*	@brief Tests each method in LinkedListOfInts->h
*/

#include "test.h"
using namespace std;



//all tests return true if passed, false if failed



test::test()
{
    
}

bool test::test1()
{
    //adds ten integers to the testlist and checks whether they are where they are supposed to be
    LinkedListOfInts* testList = new LinkedListOfInts();
    for(int i=0;i<10;i++)
    {
        testList->addFront(9-i);
    }
    vector<int> newList = testList->toVector();
    bool passed = true;
    for(int i=0;i<10;i++)
    {
        cout << "newList[i]:" << newList[i] << " should be: " << i << endl;
        if(newList[i] != i)
            passed = false;
    }
    delete testList;
    return passed;
}

bool test::test2()
{
    //adds ten integers to the testlist and checks whether they are where they are supposed to be
    LinkedListOfInts* testList = new LinkedListOfInts();
    for(int i=0;i<10;i++)
    {
        testList->addBack(i);
    }
    vector<int> newList = testList->toVector();
    bool passed = true;
    for(int i=0;i<10;i++)
    {
        cout << "newList[i]: " << newList[i] << " should be: " << i << endl;
        if(newList[i] != i)
            passed = false;
    }
    delete testList;
    return passed;
}

bool test::test3(bool adFront, bool adBack)
{
    LinkedListOfInts* testList = new LinkedListOfInts();
    //if the empty list is actually empty, returns true;
    bool passed = true;
    cout << "Should be empty. results: " << testList->isEmpty() << endl;
    if(testList->isEmpty() == false)
        passed = false;

    //adds a value to the list and tests isEmpty on it
    if(adFront)
        testList->addFront(10);
        
    if(adBack)
        testList->addBack(10);
    
    cout << "Should not be empty. results: " << testList->isEmpty() << endl;
    if(testList->isEmpty() == true)
        passed = false;
    
    delete testList;
    return passed;
}

bool test::test4(bool adFront, bool adBack)
{
    LinkedListOfInts* testList = new LinkedListOfInts();
    bool passed = true;
    //first checks if the empty list has size 0 returned.
    cout << "Size should be 0. Size is: " << testList->size() << endl;
    if(testList->size() != 0)
    {
        passed=false;
    }
    //adds ten integers and tests whether the size is 10
    if(adFront)
    {
        for(int i=0;i<10;i++)
        {
            testList->addFront(i);
        }
        cout << "Size should be 10. Size is: " << testList->size() << endl;
        if(testList->size() != 10)
        {
            passed = false;
        }
    }
    if(adBack)
    {
        for(int i=0;i<5;i++)
        {
            testList->addFront(i);
        }
        if(testList->size() != 15)
        {
            passed = false;
        }
    }
    delete testList;
    return passed;
}

bool test::test5(bool adFront, bool adBack)
{
    LinkedListOfInts* testList = new LinkedListOfInts();
    //adds 10 integers and checks if all ten integers are in the list
    bool passed = true;
    if(adFront)
    {
        for(int i=0;i<10;i++)
        {
            cout << "Value added: " << i*3 << endl;
            testList->addFront(i*3);
        }
        for(int i=0;i<10;i++)
        {
            cout << "Searching for value " << i*3 << " in the list." << endl;
            if(!testList->search(i*3))
            {
                passed = false;
            }
            else
            {
                cout << "Value has been found!" << endl;
            }
        }
    }
    if(adFront)
    {
        for(int i=0;i<10;i++)
        {
            testList->addBack(i*3);
        }
        for(int i=0;i<10;i++)
        {
            if(!testList->search(i*3))
            {
                passed = false;
            }
        }
    }
    delete testList;
    return passed;
}

bool test::test6(bool adFront, bool adBack, bool size)
{
    LinkedListOfInts* testList = new LinkedListOfInts();
    //adds 10 integers and checks if they are in the correct spot as well as if the removeFront is actually removing the front
    bool passed = true;
    if(adFront)
    {
        for(int i=0;i<10;i++)
        {
            testList->addFront(9-i);
        }
        for(int i=0;i<10;i++)
        {
            if(size)
            {
                cout << "Size should be: " << 10-i <<". Size is: " << testList->size() << endl;
                if(testList->size()!=10-i)
                    passed = false;
            }
            testList->removeFront();
            vector<int> newList = testList->toVector();
            for(int j=0;j<10;j++)
            {
                cout << "newList[j]: " << newList[j] << " should be: " << j << endl;
                if(newList[j] != j)
                {
                    passed = false;
                }
            }
        }
    }
    if(adBack)
    {
        for(int i=0;i<10;i++)
        {
            testList->addBack(i*2);
        }
        for(int i=0;i<10;i++)
        {
            testList->removeFront();
            vector<int> newList = testList->toVector();
            for(int j=i;j<9;i++)
            {
                if(newList[j] != j*2)
                {
                    passed = false;
                }
            }
        }
    }
    delete testList;
    return passed;
}

bool test::test7(bool adFront, bool adBack, bool size)
{
    LinkedListOfInts* testList = new LinkedListOfInts();
    //adds 10 integers and checks if they are in the correct spot as well as if the removeBack is actually removing the back
    bool passed = true;
    if(adFront)
    {
        for(int i=0;i<10;i++)
        {
            testList->addFront(9-i);
        }
        for(int i=0;i<10;i++)
        {
            //ensures that a value is actually being removed.
            if(size)
            {
                cout << "Size should be: " << 10-i <<". Size is: " << testList->size() << endl;
                if(testList->size()!=10-i)
                    passed = false;
            }
            testList->removeBack();
            vector<int> newList = testList->toVector();
            for(int j=0;j<9;j++)
            {
                cout << "newList[j]: " << newList[j] << " should be: " << j << endl;
                if(newList[j] != j)
                {
                    passed = false;
                }
            }
        }
    }
    //have learned that addBack does not work, so does not matter
    if(adBack)
    {
        for(int i=0;i<10;i++)
        {
            testList->addBack(i*2);
        }
        for(int i=0;i<10;i++)
        {
            testList->removeBack();
            vector<int> newList = testList->toVector();
            for(int j=0;j<9;i++)
            {
                if(newList[j] != j*2)
                {
                    passed = false;
                }
            }
        }
    }
    delete testList;
    return passed;
}

void test::run()
{
    cout << "test1: Testing addFront method..." << endl;    
    bool test1bool = test1();
    if(test1bool)
        cout << "test1 results: PASSED" << endl;
    else
        cout << "test1 results: FAILED" << endl;
    
    cout << "test2: Testing addBack method..." << endl;
    bool test2bool = test2();
    if(test2bool)
        cout << "test2 results: PASSED" << endl;
    else
        cout << "test2 results: FAILED" << endl;
    
    cout << "test3: Testing isEmpty method..." << endl;
    if(test3(test1bool, test2bool))
        cout << "test3 results: PASSED" << endl;
    else
        cout << "test3 results: FAILED" << endl;
    
    bool test4bool = test4(test1bool, test2bool);
    cout << "test4: Testing size method..." << endl;
    if(test4bool)
        cout << "test4 results: PASSED" << endl;
    else
        cout << "test4 results: FAILED" << endl;
    
    cout << "test5: Testing search method..." << endl;   
    if(test5(test1bool, test2bool))
        cout << "test5 results: PASSED" << endl;
    else
        cout << "test5 results: FAILED" << endl;
    
    cout << "test6: Testing removeFront method..." << endl;
    if(test6(test1bool, test2bool, test4bool))
        cout << "test6 results: PASSED" << endl;
    else
        cout << "test6 results: FAILED" << endl;
    
    cout << "test7: Testing removeBack method..." << endl;
    if(test7(test1bool, test2bool, test4bool))
        cout << "test7 results: PASSED" << endl;
    else
        cout << "test7 results: FAILED" << endl;
    
}
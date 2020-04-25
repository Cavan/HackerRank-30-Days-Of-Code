#include "Big_O_Notation.h"


void Big_O_Notation() {
	//RunTimeTests testTime;
	//testTime.methodTimer();

	auto t1 = chrono::high_resolution_clock::now();
	//do some work
	//**************
	cout << RunTimeTests::findNumsOfRepetitions("abca", 'a') << endl;
	//**************
	auto t2 = chrono::high_resolution_clock::now();

	//floating-point duration: no duration_cast needed;
	chrono::duration<double, milli> fp_ms = t2 - t1;

	cout << "Execution Time: " << fp_ms.count() << "ms" << endl;

	vector<char> a;
	a.push_back('a');
	a.push_back('b');
	a.push_back('c');
	a.push_back('d');

	auto t1v1 = chrono::high_resolution_clock::now();
	//do some work
	//**************
	int v1Size = RunTimeTests::findNumsOfRepetitionsv1("abcal;lfkjg;alfkj;dlfkjgs;dlfkjg;sldfkjg;slkfjg;slkjfg;lskjgfpsfgjsldf;gj;slfkhj;slfjgopsirtpseroitnfv;sfkshjgfspogijhspdfoigjporejwprowjtgpwoijrgwpoijhfgs;dofgjsd;fgjss;gfjsd;sdjs;gsfbns;flbns;bln", a).size();
	cout << v1Size << endl;
	//**************
	auto t2v1 = chrono::high_resolution_clock::now();

	//floating-point duration: no duration_cast needed;
	chrono::duration<double, milli> v1fp_ms = t2v1 - t1v1;

	cout << "Execution Time: " << v1fp_ms.count() << "ms" << endl;


	auto t1v2 = chrono::high_resolution_clock::now();
	//do some work
	//**************
	int v2Size = RunTimeTests::findNumsOfRepetitionsv2("abcal;lfkjg;alfkj;dlfkjgs;dlfkjg;sldfkjg;slkfjg;slkjfg;lskjgfpsfgjsldf;gj;slfkhj;slfjgopsirtpseroitnfv;sfkshjgfspogijhspdfoigjporejwprowjtgpwoijrgwpoijhfgs;dofgjsd;fgjss;gfjsd;sdjs;gsfbns;flbns;blnaaaaaaaaa", a).size();
	cout << v2Size << endl;
	//**************
	auto t2v2 = chrono::high_resolution_clock::now();

	//floating-point duration: no duration_cast needed;
	chrono::duration<double, milli> v2fp_ms = t2v2 - t1v2;

	cout << "Execution Time: " << v2fp_ms.count() << "ms" << endl;


}
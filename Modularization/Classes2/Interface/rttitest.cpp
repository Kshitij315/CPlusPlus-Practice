#include "series2.h"
#include <cstdio>
#include <cmath>
//let compiler qualify names of  symbols  declared in Series namespace
using namespace Series;
double Compute(Sequence* seq, int count)
{//calculating root mean square
	double sum = 0;

    //sidecasting
	//using dynamic cast for side casting Sequence* to Resetable*
	//dynamic  cast uses runtime type information(RTTI) from vtable
	//to examine  if the source pointer (Seq) points to an instance 
	//which is compatible with the target type (Resetable*) and if it is
	//returns a pointer of target type otherwise return null(0)
	Resetable* res = dynamic_cast<Resetable*>(seq);
	if(res !=nullptr)
		res->Reset();
	for(int i = 0; i < count; ++i)
	{
		double term = seq->Next();
		sum += term * term;
	}

	return sqrt(sum / count);
}

int main(void)
{
	int n;
	printf("Number of terms: ");
	scanf("%d", &n);

	LinearSequence a(2, 5);
	PowerSequence b(2);

	printf("First computation result for linear-sequence : %.3lf\n", Compute(&a, n));
	printf("First computation result for power-sequence  : %.3lf\n", Compute(&b, n));
	printf("Second computation result for linear-sequence: %.3lf\n", Compute(&a, n));
	printf("Second computation result for power-sequence : %.3lf\n", Compute(&b, n));
}


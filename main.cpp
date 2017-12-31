#include "str.h"
#include <stdlib.h>
#include "virtualdemo.h"


int main()
{
	Derived d;
	Base* bq = &d;// bq的静态类型为Base，运行时类型为Derived
	bq->f();
	bq->g();

	StringD str;
	//StringD* str = new StringD(); // 不能加上括号, StringD str;
	str.setx(1);
	printf("===%d\n",str.getx());

	// 对于new 的对象要调用delete
	//delete str;
	return 0;
}

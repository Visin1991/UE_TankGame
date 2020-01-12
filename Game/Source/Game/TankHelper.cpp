#include "TankHelper.h"

namespace TankHelper
{
	ATank* GetTank(AController* controller)
	{
		return Cast<ATank>(controller->GetPawn());
	}

	template<typename T>
	T* GetAPawn(AController* controller)
	{
		return Cast<T>(controller->GetPawn());
	}

	//Template 如果我们将Generic 函数的Implimentation 放在头文件中，运行时。代码会有性能问题
	//如果我们将Impimentation 放在CPP 中，我们必须在下面Declare 这些代码。。。。。。
	template ATank* GetAPawn(AController* controller);
}
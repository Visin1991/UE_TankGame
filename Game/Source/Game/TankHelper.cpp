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

	//Template ������ǽ�Generic ������Implimentation ����ͷ�ļ��У�����ʱ�����������������
	//������ǽ�Impimentation ����CPP �У����Ǳ���������Declare ��Щ���롣����������
	template ATank* GetAPawn(AController* controller);
}
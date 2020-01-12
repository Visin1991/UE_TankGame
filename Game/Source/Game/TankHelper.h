#pragma once

#include "Public/Tank.h"
#include "GameFramework/Controller.h"

namespace TankHelper
{
	ATank* GetTank(AController* controller);

	template<typename T>
	T* GetAPawn(AController* controller);
}
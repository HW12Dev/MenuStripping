#include "SBZSkillSharpshooterCollateralControl.h"

USBZSkillSharpshooterCollateralControl::USBZSkillSharpshooterCollateralControl() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillSharpshooterCollateralControl::StaticClass();
}



#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/NoExportTypes.h"

#include "PythonInterpreter.generated.h"

UCLASS(Blueprintable, BlueprintType)
class UE5_T_PYTHON_API UPythonInterpreter : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PythonInterpreter|math|cos")
		void CalculateCosineNode(const float& input, float& output);
		
	UPythonInterpreter();
	~UPythonInterpreter();

private:
	float calculate_cosine(const float& input);

};
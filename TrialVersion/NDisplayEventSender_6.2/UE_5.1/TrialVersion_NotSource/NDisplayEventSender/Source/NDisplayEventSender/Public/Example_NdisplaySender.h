// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


/*Note that the distribution function on CPP is only available for the full version of the plugin,
otherwise it will not work, and the trial version will only be available for the blueprint conversion*/
//注意CPP上的分发功能只有完整版插件才可以使用，否则不起效，试用版只有蓝图的转换可用

/**
*This macro is used with EXECUTEMULTINODEEVENT_CPP_END() to execute the desired logic within CPP within functions that need to be converted to multi - node distribution
* Arguments are the name of the function that specifies the owner of the function(UObject), such as "Test", followed by the variable function parameter, which corresponds to the converted function
* Converted functions must not return void functions
* If the Test object has a function void Test::TestFun(int32i, FString s);
*Then it needs to be written as, assuming that the Test object has obtained the variable oTest
* EXECUTEMULTINODEEVENT_CPP_START(oTest, "TestFun", i, s);
*Write the logic you need to distribute
* EXECUTEMULTINODEEVENT_CPP_END();
*
*For multi - node event distribution, the CPP function can be converted to a multi - node distribution function by simply passing in function arguments to it
* Note:
* 1. You can use ordinary functions or events to call the converted function or event, and can be called continuously, but do not call the same converted function or event (with the same name) several times in a short time, otherwise it may only be executed once
* 2. Do not call other converted events or functions inside the function or event that is being converted; otherwise, the execution order may be confused and multiple executions may occur
* 3. Try to write the conversion event on the object that every node will exist(because the conversion node needs to find a function through the object, if written in an object that does not exist every node will cause that node to fail to execute the objective function)
* 4. Execute this function in the first line of the defined function
* 5. The order of the parameters of the conversion function or event must be one - to - one, for example: function parameter 1 must correspond to transition node parameter 1, function parameter 2 must correspond to transition node parameter 2
* 6. The defined function please do not have a return value, if the return value is really needed, the result can be saved to an intermediate class in the logic, and each node will be taken
* 7. Functions and parameters within functions such as struct enumeration must be marked with reflection fields, for example, the converted function must be a function of the UFUNCTION() mark, and its parameters must be USTRUCT or UENUM, which can not be exposed to the blueprint, but must be marked reflection, incorporated into the reflection system
* Use this function if you want to distribute events to nodes in C++
**/
/**
* 这个宏搭配EXECUTEMULTINODEEVENT_CPP_END()使用，在CPP内将需要转为多节点分发的函数内使用这两个宏包裹执行想要执行的逻辑
* 参数分别是指定函数的拥有者（UObject）函数的名字例如"Test",后面就是可变的函数形参，这需要对应转换的函数
* 转换的函数不得有返回值需为void函数
* 假如Test对象里面有函数void Test::TestFun(int32 i, FString s);
* 那么其里面需要写为，这里假设Test对象已经获取到变量oTest
* EXECUTEMULTINODEEVENT_CPP_START(oTest,"TestFun",i,s);
* 写你需要分发的逻辑
* EXECUTEMULTINODEEVENT_CPP_END();
*
	*用于多节点事件分发，只需要为其传入函数参数，就可以将CPP函数转化为多节点分发函数
	*注意：
	* 1.可以使用普通函数或者事件去调用被转换后的函数或事件，且可以连续调用，但是不要短时间内调用同一个被转换后的函数或者事件（名字相同的）多次，否则可能只能执行一次
	* 2.正在转换的函数或者事件内部请不要去调用其他已转换的事件或者函数，否则可能会导致执行顺序混乱且多次执行
	* 3.转换事件尽量写在每个节点都会存在的对象上（因为转换节点需要通过该对象寻找函数，如果写在一个非各个结点都存在的对象上会导致那个节点无法执行目标函数）
	* 4.该函数请放在定义函数的第一行执行
	* 5.转换函数或事件的参数顺序必须一对一，例如：函数参数一必须对应转换节点参数一，函数参数二必须对应转换节点参数二
	* 6.定义的函数请不要有返回值，如果实在需要返回值可以实现逻辑内结果保存到一个中间类，各个结点再去取
	* 7.函数和函数内的参数例如结构体枚举必须使用反射字段标记，例如转换的函数必须是UFUNCTION()标记的函数，其参数必须是USTRUCT或者UENUM，可以不暴露给蓝图，但一定需要标记反射，纳入到反射系统
	*如果希望在C++分发事件到各个结点请使用这个函数
**/

//.h

/**
* 所有的类型都需要反射UENUM，USTRUCT，UPROPERTY，持有函数的类也需要UCLASS
**/
//UENUM()
//enum class ETest : uint8
//{
//	one,
//	two
//};
//
//USTRUCT()
//struct FSTest
//{
//	GENERATED_USTRUCT_BODY()
//	UPROPERTY()
//	ETest My2;
//	UPROPERTY()
//	UObject* oTest;
//	UPROPERTY()
//	FName nameTest;
//	UPROPERTY()
//	FText textTest;
//
//};


//UCLASS()
//class NDISMEDIA_API ATestClass : public AActor
//{
//	GENERATED_BODY()
//
//	UFUNCTION()
//	void TestCPP(int32 i, FString s, float f, FSTest STest);
//
//	FString PrintSTest(const FSTest& STest);
//};

//cpp
//#include "BL_NDisplayEventSender.h"

//void ATestClass::TestCPP(int32 i, FString s, float f, FSTest STest)
//{
// {
//	//宏前面请不要写逻辑   Do not write logic in front of macros
//	//宏参数是可变的，按顺序输入函数形参即可   Macro arguments are variable and function parameters are entered in order
//	EXECUTEMULTINODEEVENT_CPP_AUTO_START(i, s, f, STest);
// 
//	//TODO 各个节点执行的逻辑包含在内  The logic executed by each node is included
//	AActor* a = Cast<AActor>(STest.oTest);
//	a->SetActorLocation(a->GetActorLocation() + FVector(0, 0, f));
//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("i:%d---s:%s---f:%f \n STest:%s"), i, *s, f, *PrintSMy(my2)));
//	//TODO END
// 
//	EXECUTEMULTINODEEVENT_CPP_END();
//  //宏后面也请不要写逻辑   Please do not write logic after the macro
// }
//
// {
//	//或者 or 区别只是是否自动识别函数名和持有类
//	//The difference is only whether the function name and holding class are automatically recognized
//	EXECUTEMULTINODEEVENT_CPP_START(this, "TestCPP", i, s, f, STest);
// 
//	//TODO 各个节点执行的逻辑包含在内  The logic executed by each node is included
//	AActor* a = Cast<AActor>(STest.oTest);
//	a->SetActorLocation(a->GetActorLocation() + FVector(0, 0, f));
//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("i:%d---s:%s---f:%f \n STest:%s"), i, *s, f, *PrintSMy(my2)));
//	//TODO END
// 
//	EXECUTEMULTINODEEVENT_CPP_END();
// }
//}
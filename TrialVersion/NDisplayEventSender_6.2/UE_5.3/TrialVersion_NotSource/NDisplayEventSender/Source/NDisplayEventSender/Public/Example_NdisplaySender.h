// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


/*Note that the distribution function on CPP is only available for the full version of the plugin,
otherwise it will not work, and the trial version will only be available for the blueprint conversion*/
//ע��CPP�ϵķַ�����ֻ�����������ſ���ʹ�ã�������Ч�����ð�ֻ����ͼ��ת������

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
* ��������EXECUTEMULTINODEEVENT_CPP_END()ʹ�ã���CPP�ڽ���ҪתΪ��ڵ�ַ��ĺ�����ʹ�������������ִ����Ҫִ�е��߼�
* �����ֱ���ָ��������ӵ���ߣ�UObject����������������"Test",������ǿɱ�ĺ����βΣ�����Ҫ��Ӧת���ĺ���
* ת���ĺ��������з���ֵ��Ϊvoid����
* ����Test���������к���void Test::TestFun(int32 i, FString s);
* ��ô��������ҪдΪ���������Test�����Ѿ���ȡ������oTest
* EXECUTEMULTINODEEVENT_CPP_START(oTest,"TestFun",i,s);
* д����Ҫ�ַ����߼�
* EXECUTEMULTINODEEVENT_CPP_END();
*
	*���ڶ�ڵ��¼��ַ���ֻ��ҪΪ�䴫�뺯���������Ϳ��Խ�CPP����ת��Ϊ��ڵ�ַ�����
	*ע�⣺
	* 1.����ʹ����ͨ���������¼�ȥ���ñ�ת����ĺ������¼����ҿ����������ã����ǲ�Ҫ��ʱ���ڵ���ͬһ����ת����ĺ��������¼���������ͬ�ģ���Σ��������ֻ��ִ��һ��
	* 2.����ת���ĺ��������¼��ڲ��벻Ҫȥ����������ת�����¼����ߺ�����������ܻᵼ��ִ��˳������Ҷ��ִ��
	* 3.ת���¼�����д��ÿ���ڵ㶼����ڵĶ����ϣ���Ϊת���ڵ���Ҫͨ���ö���Ѱ�Һ��������д��һ���Ǹ�����㶼���ڵĶ����ϻᵼ���Ǹ��ڵ��޷�ִ��Ŀ�꺯����
	* 4.�ú�������ڶ��庯���ĵ�һ��ִ��
	* 5.ת���������¼��Ĳ���˳�����һ��һ�����磺��������һ�����Ӧת���ڵ����һ�����������������Ӧת���ڵ������
	* 6.����ĺ����벻Ҫ�з���ֵ�����ʵ����Ҫ����ֵ����ʵ���߼��ڽ�����浽һ���м��࣬���������ȥȡ
	* 7.�����ͺ����ڵĲ�������ṹ��ö�ٱ���ʹ�÷����ֶα�ǣ�����ת���ĺ���������UFUNCTION()��ǵĺ����������������USTRUCT����UENUM�����Բ���¶����ͼ����һ����Ҫ��Ƿ��䣬���뵽����ϵͳ
	*���ϣ����C++�ַ��¼������������ʹ���������
**/

//.h

/**
* ���е����Ͷ���Ҫ����UENUM��USTRUCT��UPROPERTY�����к�������Ҳ��ҪUCLASS
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
//	//��ǰ���벻Ҫд�߼�   Do not write logic in front of macros
//	//������ǿɱ�ģ���˳�����뺯���βμ���   Macro arguments are variable and function parameters are entered in order
//	EXECUTEMULTINODEEVENT_CPP_AUTO_START(i, s, f, STest);
// 
//	//TODO �����ڵ�ִ�е��߼���������  The logic executed by each node is included
//	AActor* a = Cast<AActor>(STest.oTest);
//	a->SetActorLocation(a->GetActorLocation() + FVector(0, 0, f));
//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("i:%d---s:%s---f:%f \n STest:%s"), i, *s, f, *PrintSMy(my2)));
//	//TODO END
// 
//	EXECUTEMULTINODEEVENT_CPP_END();
//  //�����Ҳ�벻Ҫд�߼�   Please do not write logic after the macro
// }
//
// {
//	//���� or ����ֻ���Ƿ��Զ�ʶ�������ͳ�����
//	//The difference is only whether the function name and holding class are automatically recognized
//	EXECUTEMULTINODEEVENT_CPP_START(this, "TestCPP", i, s, f, STest);
// 
//	//TODO �����ڵ�ִ�е��߼���������  The logic executed by each node is included
//	AActor* a = Cast<AActor>(STest.oTest);
//	a->SetActorLocation(a->GetActorLocation() + FVector(0, 0, f));
//	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("i:%d---s:%s---f:%f \n STest:%s"), i, *s, f, *PrintSMy(my2)));
//	//TODO END
// 
//	EXECUTEMULTINODEEVENT_CPP_END();
// }
//}
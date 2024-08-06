// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

/**  */
class FNDisplayEventNodeSlateStyle
{
public:

	static void Initialize();

	static void Shutdown();

	static void ReloadTextures();

	static const ISlateStyle& Get();

	static FName GetStyleSetName();

private:

	static TSharedRef< class FSlateStyleSet > Create();

private:

	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};
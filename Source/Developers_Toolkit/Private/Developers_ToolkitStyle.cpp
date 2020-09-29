// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Developers_ToolkitStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Settings/LevelEditorPlaySettings.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr< FSlateStyleSet > FDevelopers_ToolkitStyle::StyleInstance = NULL;

void FDevelopers_ToolkitStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{

		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
	else {
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
		ensure(StyleInstance.IsUnique());
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
	
}

void FDevelopers_ToolkitStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FDevelopers_ToolkitStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("Developers_ToolkitStyle"));
	return StyleSetName;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon40x40(45.0f, 45.0f);

TSharedRef< FSlateStyleSet > FDevelopers_ToolkitStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("Developers_ToolkitStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("Developers_Toolkit")->GetBaseDir() / TEXT("Resources"));

	const ULevelEditorPlaySettings* EditorPlaySettings = GetDefault<ULevelEditorPlaySettings>();
	if (EditorPlaySettings->LastExecutedPlayModeType == EPlayModeType::PlayMode_InVR) {
		Style->Set("Developers_Toolkit.OpenPluginWindow", new IMAGE_BRUSH(TEXT("Icon_PlayVR_Dev"), Icon40x40));
	}
	else {
		Style->Set("Developers_Toolkit.OpenPluginWindow", new IMAGE_BRUSH(TEXT("Icon_Play_Dev"), Icon40x40));
	}
	

	return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT

void FDevelopers_ToolkitStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

ISlateStyle& FDevelopers_ToolkitStyle::Get()
{
	return *StyleInstance;
}

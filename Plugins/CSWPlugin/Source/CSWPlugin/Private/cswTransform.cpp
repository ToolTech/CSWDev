//*****************************************************************************
//
// Copyright (C) SAAB AB
//
// All rights, including the copyright, to the computer program(s)
// herein belong to SAAB AB. The program(s) may be used and/or
// copied only with the written permission of SAAB AB, or in
// accordance with the terms and conditions stipulated in the
// agreement/contract under which the program(s) have been
// supplied.
//
//
// Information Class:	COMPANY UNCLASSIFIED
// Defence Secrecy:		NOT CLASSIFIED
// Export Control:		NOT EXPORT CONTROLLED
//
//
// File			: cswUEGlue.cpp
// Module		: CSW StreamingMap Unreal
// Description	: Glue Between Unreal CSW and GizmoSDK callbacks
// Author		: Anders Mod�n		
// Product		: CSW 1.1.1
//		
//
//			
// NOTE:	CSW (Common Synthetic World) is a simulation and presentation
//			framework for large scale digital twins on multiple platforms
//
//
// Revision History...							
//									
// Who	Date	Description						
//									
// AMO	241107	Created file 					(1.1.1)
//
//******************************************************************************

#include "cswTransform.h"
#include "cswGeometry.h"

// Sets default values for this component's properties
UCSWTransform::UCSWTransform()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bTickInEditor = true;
	bAutoActivate = true;

}

UCSWTransform::~UCSWTransform()
{

}

gzBool UCSWTransform::build(gzNode* buildItem)
{
	geom = NewObject<UCSWGeometry>(this, NAME_None);

	geom->RegisterComponent();

	geom->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

	geom->build(nullptr);

	return TRUE;
}


// Called when the game starts
void UCSWTransform::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCSWTransform::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}


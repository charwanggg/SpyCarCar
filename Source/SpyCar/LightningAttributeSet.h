// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "LightningAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class SPYCAR_API ULightningAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	UPROPERTY()
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, Damage)

		UPROPERTY()
	FGameplayAttributeData MaxBounces;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, MaxBounces)

		UPROPERTY()
	FGameplayAttributeData Duration;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, Duration)

		UPROPERTY()
	FGameplayAttributeData BounceRadius;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, BounceRadius)

		UPROPERTY()
	FGameplayAttributeData Cooldown;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, Cooldown)

		UPROPERTY()
	FGameplayAttributeData DelayBetweenChains;
	ATTRIBUTE_ACCESSORS(ULightningAttributeSet, DelayBetweenChains)
};

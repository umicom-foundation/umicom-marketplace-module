/*-----------------------------------------------------------------------------
 * Umicom Marketplace Module
 * File: src/runtime.c
 *
 * PURPOSE:
 *   Initialise the product through canonical Framework application runtime contracts.
 *
 * Created by: Sammy Hegab
 * Organisation: Umicom Foundation
 * Licence: MIT
 *---------------------------------------------------------------------------*/


#include "umicom/marketplace/runtime.h"

#include "umicom/marketplace/application.h"

const UmiApplicationExperienceDefinition *umi_marketplace_runtime_experience(void)
{
    return umi_marketplace_application_experience();
}

UmiStatus umi_marketplace_runtime_init(
    UmiApplicationWorkspaceRuntime *out_runtime)
{
    const UmiApplicationExperienceDefinition *experience =
        umi_marketplace_runtime_experience();
    if (experience == NULL) return UMI_STATUS_NOT_FOUND;
    return umi_application_workspace_runtime_init(experience, out_runtime);
}

UmiStatus umi_marketplace_runtime_health(
    UmiApplicationCapabilityProbe probe,
    void *user_data,
    UmiApplicationRuntimeHealth *out_health)
{
    const UmiApplicationExperienceDefinition *experience =
        umi_marketplace_runtime_experience();
    if (experience == NULL) return UMI_STATUS_NOT_FOUND;
    return umi_application_runtime_health_evaluate(
        experience, probe, user_data, out_health);
}

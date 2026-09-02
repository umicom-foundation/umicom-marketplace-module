/*-----------------------------------------------------------------------------
 * Umicom Marketplace Module
 * File: include/umicom/marketplace/application.h
 *
 * PURPOSE:
 *   Expose the thin application composition over Framework-owned experience metadata and services.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/

#ifndef UMICOM_MARKETPLACE_APPLICATION_H
#define UMICOM_MARKETPLACE_APPLICATION_H

#include "umicom/application/experience.h"
#include "umicom/application/experience_status.h"

#ifdef __cplusplus
extern "C" {
#endif

#define UMI_MARKETPLACE_MODULE_API_VERSION 1U

/**
 * Provide the marketplace application id operation used by this module and its client
 * applications.
 */
const char *umi_marketplace_application_id(void);

/**
 * Provide the marketplace application experience operation used by this module and its
 * client applications.
 */
const UmiApplicationExperienceDefinition *
umi_marketplace_application_experience(void);

/**
 * Provide the marketplace application status operation used by this module and its client
 * applications.
 */
UmiStatus umi_marketplace_application_status(
    UmiApplicationExperienceStatus *out_status);

#ifdef __cplusplus
}
#endif

#endif

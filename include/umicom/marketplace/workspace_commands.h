/*-----------------------------------------------------------------------------
 * Umicom Marketplace Module
 * File: include/umicom/marketplace/workspace_commands.h
 *
 * PURPOSE:
 *   Expose product-facing layout, panel and context commands implemented by the Framework runtime.
 *
 * AUTHOR AND ORGANISATION:
 * Sammy Hegab
 * Umicom Foundation
 *
 * LICENCE:
 * MIT
 *---------------------------------------------------------------------------*/


#ifndef UMICOM_MARKETPLACE_WORKSPACE_COMMANDS_H
#define UMICOM_MARKETPLACE_WORKSPACE_COMMANDS_H

#include "umicom/marketplace/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

UmiStatus umi_marketplace_workspace_select_layout(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *layout_id);
UmiStatus umi_marketplace_workspace_activate_panel(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *panel_id);
UmiStatus umi_marketplace_workspace_set_context(
    UmiApplicationWorkspaceRuntime *runtime,
    const char *group_id,
    const char *value);
const UmiApplicationCommandSurface *umi_marketplace_workspace_commands(
    const UmiApplicationWorkspaceRuntime *runtime);

#ifdef __cplusplus
}
#endif

#endif

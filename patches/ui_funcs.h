#ifndef __UI_FUNCS_INTERNAL_H__
#define __UI_FUNCS_INTERNAL_H__

#include "patch_helpers.h"
// The library ships the canonical event structs; use its header so patches see
// the same layout as the frontend.
#include "recompui/event_structs.h"

DECLARE_FUNC(void, recomp_run_ui_callbacks);

#endif

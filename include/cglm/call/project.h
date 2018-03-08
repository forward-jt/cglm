/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_project_h
#define cglmc_project_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../cglm.h"

CGLM_EXPORT
void
glmc_unprojecti(mat4 invMat, vec4 vp, vec3 coord, vec3 dest);

CGLM_EXPORT
void
glmc_unproject(mat4 m, vec2 vp, vec3 coord, vec3 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_h */



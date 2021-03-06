/*
 * v1beta1_custom_resource_subresources.h
 *
 * CustomResourceSubresources defines the status and scale subresources for CustomResources.
 */

#ifndef _v1beta1_custom_resource_subresources_H_
#define _v1beta1_custom_resource_subresources_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1beta1_custom_resource_subresources_t v1beta1_custom_resource_subresources_t;

#include "object.h"
#include "v1beta1_custom_resource_subresource_scale.h"



typedef struct v1beta1_custom_resource_subresources_t {
    struct v1beta1_custom_resource_subresource_scale_t *scale; //model
    object_t *status; //object

} v1beta1_custom_resource_subresources_t;

v1beta1_custom_resource_subresources_t *v1beta1_custom_resource_subresources_create(
    v1beta1_custom_resource_subresource_scale_t *scale,
    object_t *status
);

void v1beta1_custom_resource_subresources_free(v1beta1_custom_resource_subresources_t *v1beta1_custom_resource_subresources);

v1beta1_custom_resource_subresources_t *v1beta1_custom_resource_subresources_parseFromJSON(cJSON *v1beta1_custom_resource_subresourcesJSON);

cJSON *v1beta1_custom_resource_subresources_convertToJSON(v1beta1_custom_resource_subresources_t *v1beta1_custom_resource_subresources);

#endif /* _v1beta1_custom_resource_subresources_H_ */


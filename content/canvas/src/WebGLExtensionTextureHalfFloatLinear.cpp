/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "WebGLContext.h"
#include "WebGLExtensions.h"
#include "mozilla/dom/WebGLRenderingContextBinding.h"

using namespace mozilla;

WebGLExtensionTextureHalfFloatLinear::WebGLExtensionTextureHalfFloatLinear(WebGLContext* context)
    : WebGLExtensionBase(context)
{
}

WebGLExtensionTextureHalfFloatLinear::~WebGLExtensionTextureHalfFloatLinear()
{
}

IMPL_WEBGL_EXTENSION_GOOP(WebGLExtensionTextureHalfFloatLinear)

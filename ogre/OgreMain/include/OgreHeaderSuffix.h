/*-------------------------------------------------------------------------
This source file is a part of OGRE
(Object-oriented Graphics Rendering Engine)

For the latest info, see http://www.ogre3d.org/

Copyright (c) 2000-2012 Torus Knot Software Ltd
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE
-------------------------------------------------------------------------*/

/*
The original file was part of the OGRE project version 1.8.1. All
modifications to this source code file by the dmk project are subject
to the same original MIT license listed above (or in project license file).
Having been modified,
this source code file is now part of the dmk project.
Copyright (c) 2024 Marat Sungatullin
*/
#ifndef DMK_OGREHEADERSUFFIX_H
#define DMK_OGREHEADERSUFFIX_H

#include "OgrePrerequisites.h"

#if OGRE_COMPILER == OGRE_COMPILER_MSVC

// restore previous warnings settings
#   pragma warning (pop)


#endif


#endif
// allow inclusion of prefix again now (this is scoped)
#undef DMK_OGREHEADERSUFFIX_H



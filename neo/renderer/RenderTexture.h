/*
===========================================================================

Doom 3 BFG Edition GPL Source Code
Copyright (C) 1993-2012 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 BFG Edition GPL Source Code ("Doom 3 BFG Edition Source Code").

Doom 3 BFG Edition Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 BFG Edition Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/
#ifndef __RENDERTEXTURE_H__
#define __RENDERTEXTURE_H__

/*
================================================================================================

	Render Texture

================================================================================================
*/

#define CELL_GCM_INVALID_PITCH		64

/*
================================================
idRenderTexture holds both the color and depth images that are made
resident on the video hardware.
================================================
*/
class idRenderTexture {
public:
	idRenderTexture();
	~idRenderTexture();

	ID_INLINE int			GetWidth() const {
		return ( colorImage != NULL ) ? colorImage->GetUploadWidth() : depthImage->GetUploadWidth();
	}
	ID_INLINE int			GetHeight() const {
		return ( colorImage != NULL ) ? colorImage->GetUploadHeight() : depthImage->GetUploadHeight();
	}

	ID_INLINE idImage 		*GetColorImage() const {
		return colorImage;
	}
	ID_INLINE idImage 		*GetDepthImage() const {
		return depthImage;
	}


	void					Resize( int width, int height );

	void					MakeCurrent( int level = 0, int side = 0 );

private:
	idImage 			*colorImage;
	idImage 			*depthImage;
	int					targetWidth;
	int					targetHeight;

};

#endif //!__RENDERTEXTURE_H__

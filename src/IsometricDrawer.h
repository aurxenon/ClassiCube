#ifndef CC_ISOMETRICDRAWER_H
#define CC_ISOMETRICDRAWER_H
#include "Core.h"
/* Draws 2D isometric blocks for the hotbar and inventory UIs.
   Copyright 2014-2020 ClassiCube | Licensed under BSD-3
*/
struct VertexTextured;

/* Maximum number of vertices used to draw a block in isometric way. */
#define ISOMETRICDRAWER_MAXVERTICES 16
#define ISOMETRICDRAWER_MAXFACES 3

/* Sets up state to begin drawing blocks isometrically. */
void IsometricDrawer_BeginBatch(struct VertexTextured* vertices, GfxResourceID vb);
/* Buffers the vertices needed to draw the given block at the given position. */
void IsometricDrawer_DrawBatch(BlockID block, float size, float x, float y);
/* Flushes buffered vertices to the GPU, then restores state. */
void IsometricDrawer_EndBatch(void);
void IsometricDrawer_Render(int numFaces, cc_uint8* vertCounts, int* texIndices);
#endif

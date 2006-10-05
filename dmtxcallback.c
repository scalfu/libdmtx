/*
libdmtx - Data Matrix Encoding/Decoding Library
Copyright (C) 2006 Mike Laughton

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

Contact: mike@dragonflylogic.com
*/

/* $Id: dmtxcallback.c,v 1.2 2006-10-05 05:18:40 mblaughton Exp $ */

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetStepScanCallback(DmtxDecode *decode, void (* func)(DmtxDecode *, DmtxScanRange *, DmtxJumpScan *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->stepScanCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetCrossScanCallback(DmtxDecode *decode, void (* func)(DmtxScanRange *, DmtxGradient *, DmtxEdgeScan *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->crossScanCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetFollowScanCallback(DmtxDecode *decode, void (* func)(DmtxEdgeFollower *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->followScanCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetFinderBarCallback(DmtxDecode *decode, void (* func)(DmtxRay2 *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->finderBarCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetBuildMatrixCallback2(DmtxDecode *decode, void (* func)(DmtxFinderBar *, DmtxMatrixRegion *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->buildMatrixCallback2 = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetBuildMatrixCallback3(DmtxDecode *decode, void (* func)(DmtxMatrix3))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->buildMatrixCallback3 = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetBuildMatrixCallback4(DmtxDecode *decode, void (* func)(DmtxMatrix3))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->buildMatrixCallback4 = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetPlotPointCallback(DmtxDecode *decode, void (* func)(DmtxVector2, int, int, int))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->plotPointCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetXfrmPlotPointCallback(DmtxDecode *decode, void (* func)(DmtxVector2, DmtxMatrix3, int, int))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->xfrmPlotPointCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetFinalCallback(DmtxDecode *decode, void (* func)(DmtxMatrixRegion *))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->finalCallback = func;
}

/**
 *
 * @param XXX
 * @return XXX
 */
extern void
dmtxSetPlotModuleCallback(DmtxDecode *decode, void (* func)(DmtxDecode *, DmtxMatrixRegion *, int, int, DmtxColor3))
{
   if(decode == NULL) {
      exit(1); // XXX better error handling strategy
   }

   decode->plotModuleCallback = func;
}

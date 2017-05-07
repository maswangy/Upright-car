#ifndef __DIRECTION_H
#define __DIRECTION_H

#include "Root.h"
#include "CollectData.h"
#include "TrackIdentify.h"
extern mode MODE;

extern float state;//传感器融合
extern float farimg, nearimg;
//extern int32_t dirGyro;
extern int32_t dirAngleSpeed;
//extern float dirAngleSpeedIntegral;



#if defined(OUT_JUDGE) || defined(RS_JUDGE)
extern bool out;
#endif
#ifdef DYNAMIC_DC_PID
extern float DC_PID_P;
#endif

int32_t DirectionProc(int32_t speed);

#endif
/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CQuaternion.h"

class  CAnimBlendNode {
public:
    /*
    by Github.com/jte
    float m_theta0; // angle between two quaternions
    float m_theta1; // 1 / sin(m_theta0), used in slerp calculation
    int16_t m_endKeyFrameId;
    int16_t m_startKeyFrameId;
    float m_timeDelta;
    CAnimBlendSequence* m_sequence;
    CAnimBlendAssociation* m_assoc;
    */
    float field_0;
    float field_4;
    short field_8;
    short field_A;
    float field_C;
    CAnimBlendSequence* m_pAnimSequence;
    void *m_pAnimBlendAssociation;

    //funcs

    void CalcDeltas();
    void CalcDeltasCompressed();
    bool FindKeyFrame(float arg1);
    void GetCurrentTranslation(CVector& Vector, float arg2);
    void GetCurrentTranslationCompressed(CVector& Vector, float arg2);
    void GetEndTranslation(CVector& Vector, float arg2);
    void GetEndTranslationCompressed(CVector& Vector, float arg2);
    void Init();
    bool NextKeyFrame();
    bool NextKeyFrameCompressed();
    bool NextKeyFrameNoCalc();
    bool SetupKeyFrameCompressed();
    bool Update(CVector& Vector, CQuaternion& Qauternion, float arg3);
    bool UpdateCompressed(CVector& Vector, CQuaternion& Quaternion, float arg3);
};

VALIDATE_SIZE(CAnimBlendNode, 0x18);

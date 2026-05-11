// ============================================================
// 函数名称: sub_465b3c
// 虚拟地址: 0x465b3c
// WARP GUID: 839a2037-261a-5bf7-abf9-c70a6f2bfe01
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464970
// ============================================================

void __convention("regparm")sub_465b3c(float* arg1)
{
    // 第一条实际指令: float* edx = arg1
    float* edx = arg1
    
    for (int32_t i = 7; i s>= 0; i -= 1)
        float var_4c_1 = fconvert.s(fconvert.t(*edx) + fconvert.t(edx[7]))
        float var_30_1 = fconvert.s(fconvert.t(*edx) - fconvert.t(edx[7]))
        float var_48_1 = fconvert.s(fconvert.t(edx[1]) + fconvert.t(edx[6]))
        float var_34_1 = fconvert.s(fconvert.t(edx[1]) - fconvert.t(edx[6]))
        float var_44_1 = fconvert.s(fconvert.t(edx[2]) + fconvert.t(edx[5]))
        float var_38_1 = fconvert.s(fconvert.t(edx[2]) - fconvert.t(edx[5]))
        float var_40_1 = fconvert.s(fconvert.t(edx[3]) + fconvert.t(edx[4]))
        float var_3c_1 = fconvert.s(fconvert.t(edx[3]) - fconvert.t(edx[4]))
        float var_2c_1 = fconvert.s(fconvert.t(var_4c_1) + fconvert.t(var_40_1))
        float var_20_1 = fconvert.s(fconvert.t(var_4c_1) - fconvert.t(var_40_1))
        float var_28_1 = fconvert.s(fconvert.t(var_48_1) + fconvert.t(var_44_1))
        *edx = fconvert.s(fconvert.t(var_2c_1) + fconvert.t(var_28_1))
        edx[4] = fconvert.s(fconvert.t(var_2c_1) - fconvert.t(var_28_1))
        float var_1c_1 = fconvert.s((fconvert.t(fconvert.s(fconvert.t(var_48_1) - fconvert.t(var_44_1)))
            + fconvert.t(var_20_1)) * fconvert.t(0.707106769f))
        edx[2] = fconvert.s(fconvert.t(var_20_1) + fconvert.t(var_1c_1))
        edx[6] = fconvert.s(fconvert.t(var_20_1) - fconvert.t(var_1c_1))
        float var_2c_2 = fconvert.s(fconvert.t(var_3c_1) + fconvert.t(var_38_1))
        float var_24_2 = fconvert.s(fconvert.t(var_34_1) + fconvert.t(var_30_1))
        float var_c_1 =
            fconvert.s((fconvert.t(var_2c_2) - fconvert.t(var_24_2)) * fconvert.t(0.382683426f))
        float var_18_1 =
            fconvert.s(fconvert.t(0.541196108f) * fconvert.t(var_2c_2) + fconvert.t(var_c_1))
        float var_10_1 =
            fconvert.s(fconvert.t(1.30656302f) * fconvert.t(var_24_2) + fconvert.t(var_c_1))
        float var_14_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_38_1) + fconvert.t(var_34_1)))
            * fconvert.t(0.707106769f))
        float var_8_1 = fconvert.s(fconvert.t(var_30_1) + fconvert.t(var_14_1))
        float var_4_1 = fconvert.s(fconvert.t(var_30_1) - fconvert.t(var_14_1))
        edx[5] = fconvert.s(fconvert.t(var_4_1) + fconvert.t(var_18_1))
        edx[3] = fconvert.s(fconvert.t(var_4_1) - fconvert.t(var_18_1))
        edx[1] = fconvert.s(fconvert.t(var_8_1) + fconvert.t(var_10_1))
        edx[7] = fconvert.s(fconvert.t(var_8_1) - fconvert.t(var_10_1))
        edx = &edx[8]
    
    float* edx_1 = arg1
    
    for (int32_t i_1 = 7; i_1 s>= 0; i_1 -= 1)
        float var_4c_2 = fconvert.s(fconvert.t(*edx_1) + fconvert.t(edx_1[0x38]))
        float var_30_2 = fconvert.s(fconvert.t(*edx_1) - fconvert.t(edx_1[0x38]))
        float var_48_2 = fconvert.s(fconvert.t(edx_1[8]) + fconvert.t(edx_1[0x30]))
        float var_34_2 = fconvert.s(fconvert.t(edx_1[8]) - fconvert.t(edx_1[0x30]))
        float var_44_2 = fconvert.s(fconvert.t(edx_1[0x10]) + fconvert.t(edx_1[0x28]))
        float var_38_2 = fconvert.s(fconvert.t(edx_1[0x10]) - fconvert.t(edx_1[0x28]))
        float var_40_2 = fconvert.s(fconvert.t(edx_1[0x18]) + fconvert.t(edx_1[0x20]))
        float var_3c_2 = fconvert.s(fconvert.t(edx_1[0x18]) - fconvert.t(edx_1[0x20]))
        float var_2c_3 = fconvert.s(fconvert.t(var_4c_2) + fconvert.t(var_40_2))
        float var_20_2 = fconvert.s(fconvert.t(var_4c_2) - fconvert.t(var_40_2))
        float var_28_3 = fconvert.s(fconvert.t(var_48_2) + fconvert.t(var_44_2))
        *edx_1 = fconvert.s(fconvert.t(var_2c_3) + fconvert.t(var_28_3))
        edx_1[0x20] = fconvert.s(fconvert.t(var_2c_3) - fconvert.t(var_28_3))
        float var_1c_2 = fconvert.s((fconvert.t(fconvert.s(fconvert.t(var_48_2) - fconvert.t(var_44_2)))
            + fconvert.t(var_20_2)) * fconvert.t(0.707106769f))
        edx_1[0x10] = fconvert.s(fconvert.t(var_20_2) + fconvert.t(var_1c_2))
        edx_1[0x30] = fconvert.s(fconvert.t(var_20_2) - fconvert.t(var_1c_2))
        float var_2c_4 = fconvert.s(fconvert.t(var_3c_2) + fconvert.t(var_38_2))
        float var_24_4 = fconvert.s(fconvert.t(var_34_2) + fconvert.t(var_30_2))
        float var_c_2 =
            fconvert.s((fconvert.t(var_2c_4) - fconvert.t(var_24_4)) * fconvert.t(0.382683426f))
        float var_18_2 =
            fconvert.s(fconvert.t(0.541196108f) * fconvert.t(var_2c_4) + fconvert.t(var_c_2))
        float var_10_2 =
            fconvert.s(fconvert.t(1.30656302f) * fconvert.t(var_24_4) + fconvert.t(var_c_2))
        float var_14_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_38_2) + fconvert.t(var_34_2)))
            * fconvert.t(0.707106769f))
        float var_8_2 = fconvert.s(fconvert.t(var_30_2) + fconvert.t(var_14_2))
        float var_4_2 = fconvert.s(fconvert.t(var_30_2) - fconvert.t(var_14_2))
        edx_1[0x28] = fconvert.s(fconvert.t(var_4_2) + fconvert.t(var_18_2))
        edx_1[0x18] = fconvert.s(fconvert.t(var_4_2) - fconvert.t(var_18_2))
        edx_1[8] = fconvert.s(fconvert.t(var_8_2) + fconvert.t(var_10_2))
        edx_1[0x38] = fconvert.s(fconvert.t(var_8_2) - fconvert.t(var_10_2))
        edx_1 = &edx_1[1]
}

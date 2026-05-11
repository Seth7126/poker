// ============================================================
// 函数名称: sub_409bec
// 虚拟地址: 0x409bec
// WARP GUID: 3f4cf281-174a-5769-a005-34cb257f75f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409d14, sub_409ee8, sub_40a04c
// ============================================================

int32_t __stdcallsub_409bec(uint32_t* arg1 @ eax, double arg2)
{
    // 第一条实际指令: int64_t var_c = int.q(fconvert.t(arg2) * fconvert.t(data_52e16c))
    int64_t var_c = int.q(fconvert.t(arg2) * fconvert.t(data_52e16c))
    int32_t eax = var_c.d
    int32_t edx = var_c:4.d
    int32_t eax_3
    uint32_t edx_4
    
    if (edx s>= 0)
        int32_t temp2_1 = data_52e170
        eax_3 = divu.dp.d(edx:eax, temp2_1)
        edx_4 = modu.dp.d(edx:eax, temp2_1)
    else
        int32_t eax_1 = neg.d(eax)
        int32_t edx_3 = sbb.d(neg.d(edx), 0, eax != 0)
        int32_t temp2 = data_52e170
        edx_4 = modu.dp.d(edx_3:eax_1, temp2)
        eax_3 = neg.d(divu.dp.d(edx_3:eax_1, temp2))
    
    *arg1 = edx_4
    arg1[1] = eax_3 + 0xa955a
    return eax_3 + 0xa955a
}

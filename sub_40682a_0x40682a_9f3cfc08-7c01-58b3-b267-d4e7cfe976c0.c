// ============================================================
// 函数名称: sub_40682a
// 虚拟地址: 0x40682a
// WARP GUID: 9f3cfc08-7c01-58b3-b267-d4e7cfe976c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4068a2
// ============================================================

int32_t __fastcallsub_40682a(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t ebx = arg4
    
    if (arg5 != 0 || (arg2 != 0 && ebx != 0))
        int32_t edx_1 = arg2
        
        if (edx_1 s< 0)
            int32_t temp3_1 = arg3
            arg3 = neg.d(arg3)
            edx_1 = sbb.d(neg.d(edx_1), 0, temp3_1 != 0)
            edi = 1
        
        int32_t ecx_2 = arg5
        
        if (ecx_2 s< 0)
            int32_t temp4_1 = ebx
            ebx = neg.d(ebx)
            ecx_2 = sbb.d(neg.d(ecx_2), 0, temp4_1 != 0)
            edi ^= 1
        
        int32_t i = 0x40
        int32_t edi_1 = 0
        int32_t esi_1 = 0
        
        do
            int32_t temp5_1 = arg3
            arg3 <<= 1
            edx_1 = rlc.d(edx_1, 1, (temp5_1 & 0x80000000) != 0)
            bool c_4 = unimplemented  {rcl edx, 0x1}
            esi_1 = rlc.d(esi_1, 1, c_4)
            bool c_5 = unimplemented  {rcl esi, 0x1}
            edi_1 = rlc.d(edi_1, 1, c_5)
            
            if (edi_1 u>= ecx_2 && (edi_1 u> ecx_2 || esi_1 u>= ebx))
                int32_t temp8_1 = esi_1
                esi_1 -= ebx
                edi_1 = sbb.d(edi_1, ecx_2, temp8_1 u< ebx)
                arg3 += 1
            
            i -= 1
        while (i != 0)
        
        if ((edi & 1) != 0)
            arg3 = neg.d(arg3)
    else
        arg3 = divu.dp.d(arg2:arg3, ebx)
    
    return arg3
}

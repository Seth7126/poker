// ============================================================
// 函数名称: sub_409dac
// 虚拟地址: 0x409dac
// WARP GUID: 2952f79d-cda9-51f6-a514-afd5420444da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409d70
// [被调用的父级函数]: sub_409e74
// ============================================================

uint32_t __fastcallsub_409dac(int16_t arg1, int16_t arg2, int16_t arg3 @ eax, uint32_t arg4)
{
    // 第一条实际指令: int16_t ebx = arg1
    int16_t ebx = arg1
    char var_7 = 0
    int32_t eax_1 = sub_409d70(arg3) & 0x7f
    
    if (arg3 u>= 1 && arg3 u<= 0x270f && arg2 u>= 1 && arg2 u<= 0xc && ebx u>= 1
            && ebx u<= *(eax_1 * 0x18 + &data_52e0e8 + (zx.d(arg2) << 1) - 2))
        int32_t i_1 = zx.d(arg2) - 1
        
        if (i_1 s> 0)
            int32_t ecx = 1
            int32_t i
            
            do
                ebx += *(eax_1 * 0x18 + &data_52e0e8 + (ecx << 1) - 2)
                ecx += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t edx_1 = zx.d(arg3) - 1
        
        if (edx_1 s< 0)
            edx_1 += 3
        
        *arg4 = fconvert.d(float.t((zx.d(arg3) - 1) * 0x16d + (edx_1 s>> 2)
            - divs.dp.d(sx.q(zx.d(arg3) - 1), 0x64) + divs.dp.d(sx.q(zx.d(arg3) - 1), 0x190)
            + zx.d(ebx) - 0xa955a))
        var_7 = 1
    
    uint32_t result
    result.b = var_7
    return result
}

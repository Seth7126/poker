// ============================================================
// 函数名称: sub_409ee8
// 虚拟地址: 0x409ee8
// WARP GUID: 1b8b1e06-75e4-5dca-990c-4bb0a1652993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409bec, sub_4087d8, sub_409d70
// [被调用的父级函数]: sub_40a02c
// ============================================================

int16_t* __fastcallsub_409ee8(int16_t* arg1, int16_t* arg2, int16_t* arg3 @ eax, int16_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_28 = arg6
    int32_t var_28 = arg6
    uint32_t var_1c
    sub_409bec(&var_1c, arg5)
    int32_t var_18
    int16_t* result
    
    if (var_18 s> 0)
        *arg4 = (mods.dp.d(sx.q(var_18), 7)).w
        int32_t i = var_18 - 1
        int16_t* ebx
        ebx.w = 1
        
        while (i s>= 0x23ab1)
            i -= 0x23ab1
            ebx.w += 0x190
        
        int16_t var_14
        uint16_t var_12
        sub_4087d8(&var_14, 0x8eac, i, &var_12)
        
        if (var_14 == 4)
            var_14 -= 1
            var_12 -= 0x7154
        
        ebx.w += var_14 * 0x64
        sub_4087d8(&var_14, 0x5b5, zx.d(var_12), &var_12)
        int32_t eax_9
        eax_9.w = var_14
        ebx.w += (eax_9 << 2).w
        sub_4087d8(&var_14, 0x16d, zx.d(var_12), &var_12)
        
        if (var_14 == 4)
            var_14 -= 1
            var_12 += 0x16d
        
        ebx.w += var_14
        int32_t eax_14 = sub_409d70(ebx.w) & 0x7f
        void* eax_15
        eax_15.w = 1
        
        while (true)
            uint32_t ecx_4
            ecx_4.w = *(eax_14 * 0x18 + &data_52e0e8 + (zx.d(eax_15.w) << 1) - 2)
            var_14 = ecx_4.w
            ecx_4.w = var_12
            
            if (ecx_4.w u< var_14)
                break
            
            ecx_4.w = var_14
            var_12 -= ecx_4.w
            eax_15 += 1
        
        *arg3 = ebx.w
        *arg2 = eax_15.w
        eax_15.w = var_12
        result = eax_15 + 1
        *arg1 = result.w
    else
        *arg3 = 0
        *arg2 = 0
        result = arg1
        *result = 0
        *arg4 = 0
    
    return result
}

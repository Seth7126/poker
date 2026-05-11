// ============================================================
// 函数名称: sub_457dbc
// 虚拟地址: 0x457dbc
// WARP GUID: 1af43d33-1956-50ca-9f3e-b3452b6fbabe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457cac
// [被调用的父级函数]: sub_457104, sub_456eb8, sub_4574bc, sub_457f28
// ============================================================

uint32_t __fastcallsub_457dbc(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int32_t var_c = arg2
    int32_t edi = arg4
    
    if (edi s> ebx)
        if (sub_457cac(ebx, var_c, arg3, edi) == 0)
            return 0xffffffff
        
        var_c = arg3[3]
        ebx = arg3[4]
    
    int32_t ebx_1 = ebx - edi
    int32_t i = var_c s>> ebx_1.b & ((1 << edi.b) - 1)
    int32_t* var_10_1 = arg5 + (edi << 2) + 0x44
    
    while (i s> *var_10_1)
        if (ebx_1 s< 1)
            if (sub_457cac(ebx_1, var_c, arg3, 1) == 0)
                return 0xffffffff
            
            var_c = arg3[3]
            ebx_1 = arg3[4]
        
        ebx_1 -= 1
        i = (i * 2) | (var_c s>> ebx_1.b & 1)
        edi += 1
        var_10_1 = &var_10_1[1]
    
    arg3[3] = var_c
    arg3[4] = ebx_1
    
    if (edi s<= 0x10)
        return zx.d(*(*(arg5 + 0xd0) + *(arg5 + (edi << 2) + 0x8c) + i - *(arg5 + (edi << 2)) + 0x11))
    
    int32_t* eax_15 = arg3[5]
    *(*eax_15 + 0x14) = 0x72
    (*(*eax_15 + 4))()
    return 0
}

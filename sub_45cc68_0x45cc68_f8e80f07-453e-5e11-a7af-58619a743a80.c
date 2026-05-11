// ============================================================
// 函数名称: sub_45cc68
// 虚拟地址: 0x45cc68
// WARP GUID: f8e80f07-453e-5e11-a7af-58619a743a80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t __fastcallsub_45cc68(int32_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* ebx = *(arg3 + 0x1b6)
    void* ebx = *(arg3 + 0x1b6)
    
    if (*(ebx + 0x5c) s>= *(arg3 + 0x12a))
        int32_t i = 0
        int32_t var_14_1 = *(arg3 + 0xd4)
        int32_t var_20_1 = arg2
        void* var_1c_1 = ebx + 0x34
        
        while (i s< *(arg3 + 0x20))
            *arg1 * *(var_1c_1 + 0x30)
            *var_20_1
            (*var_1c_1)((i << 2) + ebx + 0xc)
            var_1c_1 += 4
            var_20_1 += 4
            i += 1
            var_14_1 += 0x54
        
        *(ebx + 0x5c) = 0
    
    int32_t var_18 = *(arg3 + 0x12a) - *(ebx + 0x5c)
    int32_t edx_6 = *(ebx + 0x60)
    
    if (edx_6 u< var_18)
        var_18 = edx_6
    
    int32_t edx_7 = *arg5
    arg4 -= edx_7
    
    if (var_18 u> arg4)
        var_18 = arg4
    
    (*(*(arg3 + 0x1ba) + 4))(var_18, (edx_7 << 2) + arg6)
    *arg5 += var_18
    *(ebx + 0x60) -= var_18
    int32_t result = *(ebx + 0x5c) + var_18
    *(ebx + 0x5c) = result
    
    if (result s>= *(arg3 + 0x12a))
        *arg1 += 1
    
    return result
}

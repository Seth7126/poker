// ============================================================
// 函数名称: sub_454fd0
// 虚拟地址: 0x454fd0
// WARP GUID: e49a72f0-d8bc-5ff8-8ceb-081a7bcdcfac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454e00, sub_454f30
// [被调用的父级函数]: sub_45591c, sub_455258
// ============================================================

void* __fastcallsub_454fd0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, uint32_t arg4)
{
    // 第一条实际指令: void* esi = arg3[1]
    void* esi = arg3[1]
    uint32_t i_3 = divu.dp.d(0:0x3b9ac9f4, arg1)
    
    if (i_3 s<= 0)
        *(*arg3 + 0x14) = 0x45
        (**arg3)()
    
    uint32_t i_1
    
    i_1 = i_3 s>= arg4 ? arg4 : i_3
    
    *(esi + 0x4c) = i_1
    void* result = sub_454e00(arg3, arg2, arg4 << 2)
    int32_t var_1c = 0
    
    if (0 u< arg4)
        do
            uint32_t i_2
            
            if (arg4 - var_1c u<= i_1)
                i_2 = arg4 - var_1c
            else
                i_2 = i_1
            
            i_1 = i_2
            void* edx_7 = sub_454f30(arg3, arg2, i_1 * arg1)
            uint32_t i = i_1
            void** eax_12 = result + (var_1c << 2)
            
            for (; i u> 0; i -= 1)
                *eax_12 = edx_7
                var_1c += 1
                eax_12 = &eax_12[1]
                edx_7 += arg1
        while (var_1c u< arg4)
    
    return result
}

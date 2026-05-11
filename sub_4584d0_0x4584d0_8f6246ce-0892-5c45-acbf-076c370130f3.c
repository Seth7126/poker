// ============================================================
// 函数名称: sub_4584d0
// 虚拟地址: 0x4584d0
// WARP GUID: 8f6246ce-0892-5c45-acbf-076c370130f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46026c
// [被调用的父级函数]: sub_458970
// ============================================================

int32_t* __thiscallsub_4584d0(int32_t* arg1, void* arg2 @ eax, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = *(arg2 + 0x1b6)
    void* ebx = *(arg2 + 0x1b6)
    int32_t* result
    int32_t esi
    
    if (*(ebx + 0x24) == 0)
        esi = 2
        int32_t eax_3 = *(ebx + 0x2c)
        
        if (2 u> eax_3)
            esi = eax_3
        
        int32_t eax_5 = *arg4
        int32_t ecx_5 = arg3 - eax_5
        
        if (ecx_5 u< esi)
            esi = ecx_5
        
        int32_t var_18 = *(arg5 + (eax_5 << 2))
        
        if (esi u<= 1)
            int32_t var_14_2 = *(ebx + 0x20)
            *(ebx + 0x24) = 1
        else
            int32_t var_14_1 = *(arg5 + (eax_5 << 2) + 4)
        
        *arg1
        result = (*(ebx + 0xc))(&var_18)
    else
        sub_46026c((*arg4 << 2) + arg5, 0, ebx + 0x20, *(ebx + 0x28), 1, 0)
        esi = 1
        result = nullptr
        *(ebx + 0x24) = 0
    
    *arg4 += esi
    *(ebx + 0x2c) -= esi
    
    if (*(ebx + 0x24) == 0)
        result = arg1
        *result += 1
    
    return result
}

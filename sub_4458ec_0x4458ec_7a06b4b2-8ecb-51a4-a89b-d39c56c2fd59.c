// ============================================================
// 函数名称: sub_4458ec
// 虚拟地址: 0x4458ec
// WARP GUID: 7a06b4b2-8ecb-51a4-a89b-d39c56c2fd59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4458ec(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    
    if ((arg1[8].b & 2) == 0 && *(arg1 + 0x212) != 0)
        void* edx_1 = *(arg2 + 8)
        void* eax = arg1[0x19]
        int32_t ebx_1 = *(eax + 0x14)
        
        if (ebx_1 u> 0)
            *(edx_1 + 0x18) = ebx_1
        
        int32_t ebx_2 = *(eax + 0x10)
        
        if (ebx_2 u> 0)
            *(edx_1 + 0x1c) = ebx_2
        
        int32_t ebx_3 = *(eax + 0xc)
        
        if (ebx_3 u> 0)
            *(edx_1 + 0x20) = ebx_3
        
        int32_t ebx_4 = *(eax + 8)
        
        if (ebx_4 u> 0)
            *(edx_1 + 0x24) = ebx_4
        
        (*(*arg1 + 0x38))(edx_1 + 0x24, edx_1 + 0x20)
    
    return (*(*arg1 - 0x10))(arg2)
}

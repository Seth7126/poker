// ============================================================
// 函数名称: sub_42cf3c
// 虚拟地址: 0x42cf3c
// WARP GUID: 0707a2b0-afed-523b-af9e-ce6192335a85
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c788
// [被调用的父级函数]: sub_42fc10
// ============================================================

void* __convention("regparm")sub_42cf3c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    void* result
    result.w = 3
    result.w = 3 & arg1[8].w
    
    if (0 == result.w)
        void* eax_1 = arg1[0x19]
        int32_t edx_1 = *(eax_1 + 0xc)
        
        if (edx_1 u<= 0 || edx_1 s>= arg1[0xe])
            int32_t edx_3 = *(eax_1 + 0x14)
            
            if (edx_3 u> 0 && edx_3 s> arg1[0xe])
                *(eax_1 + 0x14) = arg1[0xe]
        else
            *(eax_1 + 0xc) = arg1[0xe]
        
        int32_t edx_5 = *(eax_1 + 8)
        
        if (edx_5 u<= 0 || edx_5 s>= arg1[0xf])
            int32_t edx_7 = *(eax_1 + 0x10)
            
            if (edx_7 u> 0 && edx_7 s> arg1[0xf])
                *(eax_1 + 0x10) = arg1[0xf]
        else
            *(eax_1 + 8) = arg1[0xf]
        
        result = *(arg2 + 8)
        
        if (result != 0 && arg1[0x24] != 0 && (*(arg1 + 0x45) & 4) == 0 && (*(result + 0x18) & 1) == 0
                && *(result + 0x10) != 0 && *(result + 0x14) != 0)
            return sub_42c788(arg1)
    
    return result
}

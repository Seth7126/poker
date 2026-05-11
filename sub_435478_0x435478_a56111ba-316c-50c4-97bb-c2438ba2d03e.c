// ============================================================
// 函数名称: sub_435478
// 虚拟地址: 0x435478
// WARP GUID: a56111ba-316c-50c4-97bb-c2438ba2d03e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433414, sub_43534c
// [被调用的父级函数]: sub_43550c
// ============================================================

int32_tsub_435478(void* arg1)
{
    // 第一条实际指令: int32_t ebx = *(*(arg1 - 4) + 0x18)
    int32_t ebx = *(*(arg1 - 4) + 0x18)
    void* edi = *(*(arg1 - 4) + 0x60)
    int32_t result
    
    if (*(*(edi + 0x14) + 0x10) != 1)
        int32_t eax_12 = sub_433414(*(*(arg1 - 4) + 0x60), 2) + ebx
        
        if (eax_12 s>= *(*(arg1 - 4) + 0x50))
            *(*(arg1 - 4) + 0x50) = eax_12
        
        result = sub_43534c(*(arg1 - 4), *(*(arg1 - 4) + 0x60)) - ebx
        
        if (result s<= *(*(arg1 - 4) + 0x50))
            *(*(arg1 - 4) + 0x50) = result
    else
        int32_t eax_5 = sub_433414(edi, 1) + ebx
        
        if (eax_5 s>= *(*(arg1 - 4) + 0x54))
            *(*(arg1 - 4) + 0x54) = eax_5
        
        result = sub_43534c(*(arg1 - 4), *(*(arg1 - 4) + 0x60)) - ebx
        
        if (result s<= *(*(arg1 - 4) + 0x54))
            *(*(arg1 - 4) + 0x54) = result
    
    return result
}

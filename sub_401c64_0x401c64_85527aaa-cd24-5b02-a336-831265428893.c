// ============================================================
// 函数名称: sub_401c64
// 虚拟地址: 0x401c64
// WARP GUID: 85527aaa-cd24-5b02-a336-831265428893
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_401d74, sub_4020a0, sub_401de4, sub_40231c, sub_4024c0
// ============================================================

void* __convention("regparm")sub_401c64(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == data_531484)
    if (arg1 == data_531484)
        data_531484 = arg1[1]
    
    int32_t* edx_2 = arg1[1]
    int32_t ecx = arg1[2]
    void* eax
    
    if (ecx s> 0x1000)
        eax = *arg1
        *edx_2 = eax
        *(eax + 4) = edx_2
    else
        if (arg1 != edx_2)
            if (ecx s< 0)
                ecx += 3
            
            *(data_531490 + (ecx s>> 2 << 2) - 0xc) = edx_2
            void* eax_1 = *arg1
            *edx_2 = eax_1
            *(eax_1 + 4) = edx_2
            return eax_1
        
        if (ecx s< 0)
            ecx += 3
        
        eax = data_531490
        *(eax + (ecx s>> 2 << 2) - 0xc) = 0
    
    return eax
}

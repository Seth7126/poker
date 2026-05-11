// ============================================================
// 函数名称: sub_454e00
// 虚拟地址: 0x454e00
// WARP GUID: 8e72f2a8-37cb-5ab8-b8e9-61f80ff097e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454dec, sub_455a08
// [被调用的父级函数]: sub_45591c, sub_454fd0, sub_455188, sub_4550a4, sub_4551f0
// ============================================================

void* __convention("regparm")sub_454e00(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i = arg3
    int32_t i = arg3
    void* eax = arg1[1]
    
    if (i u> 0x3b9ac9f4)
        arg3 = sub_454dec(arg1, 1)
    
    int32_t eax_3 = i & 7
    
    if (eax_3 u> 0)
        i += 8 - eax_3
    
    if (arg2 s< 0 || arg2 s>= 2)
        void* eax_4 = *arg1
        *(eax_4 + 0x14) = 0xc
        *(eax_4 + 0x18) = arg2
        arg3 = (**arg1)(arg2, eax)
    
    void** ebp = nullptr
    void** eax_7 = *(eax + (arg2 << 2) + 0x30)
    
    if (eax_7 != 0)
        while (i u> eax_7[2])
            ebp = eax_7
            eax_7 = *eax_7
            
            if (eax_7 == 0)
                break
    
    if (eax_7 == 0)
        uint32_t ebx_1
        
        if (ebp != 0)
            ebx_1 = *((arg2 << 2) + &data_52ebfc)
        else
            ebx_1 = *((arg2 << 2) + &data_52ebf4)
        
        if (ebx_1 u> 0x3b9aca00 - (i + 0xc))
            ebx_1 = 0x3b9aca00 - (i + 0xc)
        
        while (true)
            eax_7 = sub_455a08(arg3, i + 0xc + ebx_1)
            
            if (eax_7 != 0)
                break
            
            arg3 = 2
            ebx_1 = divu.dp.d(0:ebx_1, 2)
            
            if (ebx_1 u< 0x32)
                arg3 = sub_454dec(arg1, 2)
        
        *(eax + 0x48) += i + 0xc + ebx_1
        *eax_7 = nullptr
        eax_7[1] = 0
        eax_7[2] = ebx_1 + i
        
        if (ebp != 0)
            *ebp = eax_7
        else
            *(eax + (arg2 << 2) + 0x30) = eax_7
    
    void* result = &eax_7[3] + eax_7[1]
    eax_7[1] += i
    eax_7[2] -= i
    return result
}

// ============================================================
// 函数名称: sub_401434
// 虚拟地址: 0x401434
// WARP GUID: 4feaf183-5592-5200-9b7d-f958925760f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LocalAlloc
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40148c
// ============================================================

int32_t*sub_401434()
{
    // 第一条实际指令: if (data_531454 == 0)
    if (data_531454 == 0)
        HLOCAL eax_1 = LocalAlloc(LMEM_FIXED, 0x644)
        
        if (eax_1 == 0)
            return 0
        
        *eax_1 = data_531450
        data_531450 = eax_1
        
        for (int32_t i = 0; i != 0x64; i += 1)
            *(eax_1 + i * 0x10 + 4) = data_531454
            data_531454 = eax_1 + i * 0x10 + 4
    
    int32_t* result = data_531454
    data_531454 = *result
    return result
}

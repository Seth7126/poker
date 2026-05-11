// ============================================================
// 函数名称: sub_40176c
// 虚拟地址: 0x40176c
// WARP GUID: 198ae4b2-d2a3-5561-9edf-5cffb81b9e93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualAlloc
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_401910, sub_401880
// ============================================================

int32_t* __convention("regparm")sub_40176c(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t lpAddress_1 = arg1 & 0xfffff000
    int32_t lpAddress_1 = arg1 & 0xfffff000
    int32_t edx_3 = (arg1 + arg2 + 0xfff) & 0xfffff000
    *arg3 = lpAddress_1
    int32_t* result = edx_3 - lpAddress_1
    arg3[1] = result
    
    for (void** i = data_531458; i != &data_531458; i = *i)
        int32_t lpAddress = i[2]
        int32_t edi_2 = i[3] + lpAddress
        
        if (lpAddress_1 u> lpAddress)
            lpAddress = lpAddress_1
        
        if (edi_2 u> edx_3)
            edi_2 = edx_3
        
        if (edi_2 u> lpAddress)
            result = VirtualAlloc(lpAddress, edi_2 - lpAddress, MEM_COMMIT, PAGE_READWRITE)
            
            if (result == 0)
                result = arg3
                *result = 0
                break
    
    return result
}

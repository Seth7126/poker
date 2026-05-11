// ============================================================
// 函数名称: sub_401800
// 虚拟地址: 0x401800
// WARP GUID: 1b71a50c-842c-5a4c-9c8e-46be58f72e87
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualFree
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_401a34
// ============================================================

BOOL __convention("regparm")sub_401800(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_14 = arg3
    int32_t* var_14 = arg3
    int32_t lpAddress_1 = (arg1 + 0xfff) & 0xfffff000
    int32_t ebp_2 = (arg1 + arg2) & 0xfffff000
    *arg3 = lpAddress_1
    BOOL result = ebp_2 - lpAddress_1
    arg3[1] = result
    
    for (void** i = data_531458; i != &data_531458; i = *i)
        int32_t lpAddress = i[2]
        int32_t edi_2 = i[3] + lpAddress
        
        if (lpAddress u< lpAddress_1)
            lpAddress = lpAddress_1
        
        if (ebp_2 u< edi_2)
            edi_2 = ebp_2
        
        if (edi_2 u> lpAddress)
            result = VirtualFree(lpAddress, edi_2 - lpAddress, MEM_DECOMMIT)
            
            if (result == 0)
                data_531434 = 2
    
    return result
}

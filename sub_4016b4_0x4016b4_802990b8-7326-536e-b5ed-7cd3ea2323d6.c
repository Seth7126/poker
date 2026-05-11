// ============================================================
// 函数名称: sub_4016b4
// 虚拟地址: 0x4016b4
// WARP GUID: 802990b8-7326-536e-b5ed-7cd3ea2323d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualFree
// [内部子函数调用]: sub_4014bc
// [被调用的父级函数]: sub_401910, sub_401a34, sub_401880
// ============================================================

int32_t* __convention("regparm")sub_4016b4(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t lpAddress_1 = 0xffffffff
    int32_t lpAddress_1 = 0xffffffff
    int32_t var_18 = 0
    int32_t* i_1
    
    for (int32_t* i = data_531458; i != &data_531458; i = i_1)
        i_1 = *i
        int32_t lpAddress = i[2]
        
        if (arg1 u<= lpAddress && lpAddress + i[3] u<= arg2 + arg1)
            if (lpAddress u< lpAddress_1)
                lpAddress_1 = lpAddress
            
            int32_t eax_5 = lpAddress + i[3]
            
            if (eax_5 u> var_18)
                var_18 = eax_5
            
            if (VirtualFree(lpAddress, 0, MEM_RELEASE) == 0)
                data_531434 = 1
            
            sub_4014bc(i)
    
    int32_t* result = arg3
    *result = 0
    
    if (var_18 != 0)
        *arg3 = lpAddress_1
        result = var_18 - lpAddress_1
        arg3[1] = result
    
    return result
}

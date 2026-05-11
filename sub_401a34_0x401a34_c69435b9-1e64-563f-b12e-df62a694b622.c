// ============================================================
// 函数名称: sub_401a34
// 虚拟地址: 0x401a34
// WARP GUID: c69435b9-1e64-563f-b12e-df62a694b622
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401548, sub_4014d4, sub_4016b4, sub_401800
// [被调用的父级函数]: sub_401e1c
// ============================================================

int32_t* __convention("regparm")sub_401a34(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebx_1 = (arg1 + 0x3fff) & 0xffffc000
    int32_t ebx_1 = (arg1 + 0x3fff) & 0xffffc000
    int32_t esi_2 = (arg2 + arg1) & 0xffffc000
    int32_t* result
    
    if (ebx_1 u>= esi_2)
        result = nullptr
        *arg3 = 0
    else
        sub_401800(ebx_1, esi_2 - ebx_1, arg3)
        int32_t var_1c
        result = sub_4014d4(&data_531468, arg3, &var_1c)
        int32_t ebx_2 = var_1c
        
        if (ebx_2 != 0)
            int32_t var_18
            int32_t var_14
            sub_4016b4(ebx_2, var_18, &var_14)
            var_1c = var_14
            int32_t* result_2
            result = result_2
            int32_t* result_1 = result
        
        if (var_1c != 0)
            return sub_401548(&data_531468, &var_1c)
    
    return result
}

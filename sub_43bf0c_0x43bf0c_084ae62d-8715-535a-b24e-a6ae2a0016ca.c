// ============================================================
// 函数名称: sub_43bf0c
// 虚拟地址: 0x43bf0c
// WARP GUID: 084ae62d-8715-535a-b24e-a6ae2a0016ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b83c, sub_43b9ac, sub_43b7cc, sub_403248, sub_43b890, sub_403e4c, sub_43b998, sub_43b94c, sub_43b9bc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43bf0c(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: int32_t result = sub_403248(sub_43b94c(arg1), &data_436278)
    int32_t result = sub_403248(sub_43b94c(arg1), &data_436278)
    
    if (result.b != 0)
        int16_t edx
        
        if (arg3 == 0 || arg1[9] == 0)
            result, edx = sub_43b7cc(arg1, *(arg2 + 0x54))
        
        if (arg3 == 0 || arg1[0xb].b == 0)
            edx.b = *(arg2 + 0x58)
            result, edx = sub_43b83c(arg1, edx.b)
        
        if (arg3 == 0 || *(arg1 + 0x2d) == 1)
            edx.b = *(arg2 + 0x59)
            result, edx = sub_43b890(arg1, edx.b)
        
        if (arg3 == 0 || arg1[0x12] == 0)
            result = *(arg2 + 0x5c)
            arg1[0x12] = result
        
        if (arg3 == 0 || arg1[0x13] == 0)
            result, edx = sub_403e4c(&arg1[0x13], *(arg2 + 0x60))
        
        if (arg3 == 0 || arg1[0xd] == 0xffffffff)
            result, edx = sub_43b9bc(arg1, *(arg2 + 0x64))
        
        if (arg3 == 0 || arg1[0x15].w == 0)
            result, edx = sub_43b998(arg1, *(arg2 + 0x68))
        
        if (arg3 == 0 || *(arg1 + 0x32) == 1)
            edx.b = *(arg2 + 0x6a)
            result = sub_43b9ac(arg1, edx.b)
        
        if (arg3 == 0 || *(arg1 + 0x82) == 0)
            arg1[0x20] = *(arg2 + 0x30)
            result = *(arg2 + 0x34)
            arg1[0x21] = result
    
    return result
}

// ============================================================
// 函数名称: sub_442994
// 虚拟地址: 0x442994
// WARP GUID: b8f0a224-0ece-5159-a1b6-31f7b6ffb659
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_443d2c, sub_403248, sub_443d04, sub_4030a0, sub_42ad4c, sub_4106bc, sub_443ce0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_442994(int32_t* arg1, HANDLE arg2, int32_t arg3)
{
    // 第一条实际指令: HANDLE esi = arg2
    HANDLE esi = arg2
    int32_t ecx_1 = sub_42ad4c(arg1, esi, arg3.b)
    char result = arg3.b
    char result_1 = result
    result -= 1
    int32_t ebx
    
    if (result_1 u< 1)
        result = sub_403248(esi, &data_4361a0)
        
        if (result != 0)
            if (arg1[0xb2] == 0)
                arg1[0xb2] = sub_4030a0(ecx_1, 0x436101)
            
            result = sub_4103c8(arg1[0xb2], esi)
        else if ((arg1[8].b & 1) == 0 && arg1[0x8c] == 0 && arg1 == *(esi + 4))
            result = sub_403248(esi, 0x438b44)
            
            if (result != 0)
                result, ebx, esi = sub_443d2c(arg1, esi)
    else if (result_1 == 1)
        int32_t* ebp_1 = arg1[0xb2]
        
        if (ebp_1 != 0)
            result = sub_403248(esi, &data_4361a0)
        
        if (ebp_1 == 0 || result == 0)
            if (esi == arg1[0x8c])
                result, ebx, esi = sub_443d2c(arg1, nullptr)
            
            if (esi == arg1[0x90])
                result = sub_443d04(arg1, nullptr)
            
            if (esi == arg1[0x92])
                result = sub_443ce0(arg1, nullptr)
        else
            result = sub_4106bc(ebp_1)
    
    if (arg1[0x8e] == 0)
        return result
    
    return (*(*arg1[0x8e] + 0x10))()
}

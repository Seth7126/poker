// ============================================================
// 函数名称: sub_4144f0
// 虚拟地址: 0x4144f0
// WARP GUID: 2128e6c1-48e5-5097-9c55-b8980381078f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_414430, sub_415210, sub_413a50
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4144f0(void* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg2 = 0
    *arg2 = 0
    int32_t result
    int32_t ecx
    result, ecx = sub_413a50(arg1)
    result.b &= 0xf0
    
    if (result.b == 0xf0)
        result.b = sub_415210(ecx).b & 0xf
        *arg2 = result.b
        
        if ((*arg2 & 2) != 0)
            result = sub_414430(arg1)
            *arg3 = result
    
    return result
}

// ============================================================
// 函数名称: sub_412c78
// 虚拟地址: 0x412c78
// WARP GUID: fc3d907a-94e5-5e99-9fa2-e5df5040c7f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412c50
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412c78(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg1[3]
    int32_t edi = arg1[3]
    int32_t result
    int32_t ecx
    result, ecx = sub_412c50(arg1, arg2)
    arg1[2] = arg2
    
    if (arg2 s>= edi)
        return result
    
    ecx.w = 2
    return (*(*arg1 + 0xc))()
}

// ============================================================
// 函数名称: sub_454828
// 虚拟地址: 0x454828
// WARP GUID: 5fa1ffcd-027a-517a-94eb-8dc3592226f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_454828(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t var_10_1 = 0
    int32_t* edi = *(*(arg1 + 0x20) + 8)
    
    if (edi != 0)
        var_10_1 = sub_4128c0(edi)
    
    int32_t result = (*(*arg2 + 8))(var_10_1)
    
    if (var_10_1 s<= 0)
        return result
    
    *(*(*(arg1 + 0x20) + 8) + 4)
    return (*(*arg2 + 8))()
}

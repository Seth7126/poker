// ============================================================
// 函数名称: sub_423fbc
// 虚拟地址: 0x423fbc
// WARP GUID: 9f8ad2f1-71dd-5317-8e1c-325a8aa79d8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_424508
// ============================================================

int32_t __convention("regparm")sub_423fbc(int32_t* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(arg1 + 0x1fd)
    
    if (sub_431bcc(arg1) != 0)
        result.b = SendMessageA(sub_4318d0(arg1), 0xb8, 0, 0) != 0
    
    return result
}

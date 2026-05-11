// ============================================================
// 函数名称: sub_424664
// 虚拟地址: 0x424664
// WARP GUID: 7791a22d-52d3-5f2e-9119-c89c7d54b5e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA, SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_424664(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    void* result = data_53040c
    
    if (*result != 0)
        result = GetWindowLongA(sub_4318d0(arg1), 0xfffffff0)
        
        if ((result.b & 4) == 0)
            return SendMessageA(sub_4318d0(arg1), 0xd3, 3, 0)
    
    return result
}

// ============================================================
// 函数名称: sub_4b51bc
// 虚拟地址: 0x4b51bc
// WARP GUID: 6677521f-ab5b-5fba-ae28-7a0625dc564a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4b51bc(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.b = arg2
    int32_t* ebx = arg1
    arg1.b = ebx[0x90].b
    
    if (arg1.b == var_8.b)
        return arg1
    
    arg1.b = var_8.b
    ebx[0x90].b = arg1.b
    return (*(*ebx + 0xc4))(var_8)
}

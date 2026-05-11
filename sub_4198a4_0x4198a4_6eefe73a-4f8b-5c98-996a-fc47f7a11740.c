// ============================================================
// 函数名称: sub_4198a4
// 虚拟地址: 0x4198a4
// WARP GUID: 6eefe73a-4f8b-5c98-996a-fc47f7a11740
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowOrgEx
// [内部子函数调用]: sub_419b40
// [被调用的父级函数]: sub_4198d0
// ============================================================

int32_t __convention("regparm")sub_4198a4(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if ((arg1[0x15].b & 0x80) != 0)
        POINT lppoint
        GetWindowOrgEx(sub_419b40(arg1), &lppoint)
        
        if (lppoint.x != 0)
            result.b = 1
    
    return result
}

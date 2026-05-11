// ============================================================
// 函数名称: sub_42d3b4
// 虚拟地址: 0x42d3b4
// WARP GUID: eb4db1f1-d7ab-5a7f-b014-033587bff6dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42abc0, sub_4032ac
// [被调用的父级函数]: sub_42abf0
// ============================================================

int32_t __convention("regparm")sub_42d3b4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_42abc0(arg1)
    int32_t result = sub_42abc0(arg1)
    
    if (arg2 != result)
        return result
    
    int32_t* ebx
    ebx.w = 0xfff0
    return sub_4032ac(arg1, arg2, 0)
}

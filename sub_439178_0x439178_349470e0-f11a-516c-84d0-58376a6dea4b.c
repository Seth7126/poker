// ============================================================
// 函数名称: sub_439178
// 虚拟地址: 0x439178
// WARP GUID: 349470e0-f11a-516c-84d0-58376a6dea4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a1a8, sub_42f140
// [被调用的父级函数]: sub_43dfc8, sub_43df80, sub_43909f
// ============================================================

HANDLE __convention("regparm")sub_439178(int32_t* arg1)
{
    // 第一条实际指令: HANDLE result = sub_42a1a8(arg1)
    HANDLE result = sub_42a1a8(arg1)
    
    if (result == 0)
        return nullptr
    
    sub_42f140(result, 0)
    return result
}
